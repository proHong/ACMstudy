#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long d[202][202];

long long dp(int n,int k)
{
	for (int i = 0; i <= n; i++)
		d[0][i] = 0;
	for (int i = 0; i <= n; i++)
		d[1][i] = 1;
	for (int i = 0; i <= n; i++)
		d[2][i] = i+1;
	for (int i = 3; i <= k; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			for (int t = 0; t <= j; t++)
				d[i][j] = (d[i][j] + d[i-1][j - k]) % 1000000000;
		}
	}

	return d[k][n];
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	int N, K;
	cin >> N >> K;

	cout << dp(N,K) << '\n';


	return 0;
}