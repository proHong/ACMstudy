#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

bool check[30][30];
int vx[] = { 1, -1, 0, 0 };
int vy[] = { 0, 0, 1, -1 };
double prob[4];

double dfs(int x, int y, int n)
{
	if (check[x][y])return 0;
	if (n == 0)return 1;

	check[x][y] = true;

	double ans = 0;

	for (int i = 0; i < 4; i++)
	{
		ans += dfs(x + vx[i], y + vy[i], n - 1) * prob[i];
	}
	check[x][y] = false;

	return ans;
}

double getProbability(int n, int east, int west, int south, int north)
{
	prob[0] = east / 100.0;
	prob[1] = west / 100.0;
	prob[2] = south / 100.0;
	prob[3] = north / 100.0;

	return dfs(15, 15, n);
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, east, west, south, north;
	cout << "n = "; cin >> n;
	cout << "east = "; cin >> east;
	cout << "west = "; cin >> west;
	cout << "south = "; cin >> south;
	cout << "north = "; cin >> north;


	double result = getProbability(n, east, west, south, north);

	cout << "Returns: " << result << '\n';

	return 0;
}