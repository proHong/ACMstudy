#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int a[2][1000001];
int d[2][1000001];

int dp(int n)
{
	d[0][1] = a[0][1];
	d[1][1] = a[1][1];
	d[0][2] = d[1][1] + a[0][2];
	d[1][2] = d[0][1] + a[1][2];
	
	for (int i = 3; i <= n; i++)
	{
		d[0][i] = max(d[1][i - 2] + a[0][i], d[1][i - 1] + a[0][i]);
		d[1][i] = max(d[0][i - 2] + a[1][i], d[0][i - 1] + a[1][i]);
	}


	return max(d[0][n],d[1][n]);
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) 
	{
		int n;
		cin >> n;
		for (int j = 0; j < 2; j++)
			for (int k = 1; k <= n; k++)
				cin >> a[j][k];

		cout << dp(n) << '\n';
	}

	return 0;
}