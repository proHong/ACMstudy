#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long d[1001][10];

int dp(int n)
{
	for (int i = 0; i < 10; i++)
		d[1][i] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			d[i][j] = 0;
			for (int k = j; k < 10; k++)
			{
				d[i][j] = (d[i][j] + d[i - 1][k]) % 10007;
			}
		}

	}
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		result = (result + d[n][i]) % 10007;
	}


	return result;
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	cout << dp(n) << '\n';

	return 0;
}