#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long d[101][10];

long long dp(int n)
{
	d[1][0] = 0;
	for (int i = 1; i < 10; i++)
		d[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				d[i][j] = d[i - 1][j + 1];
			else if (j == 9)
				d[i][j] = d[i - 1][j - 1];
			else

				d[i][j] = (d[i - 1][j + 1] + d[i - 1][j - 1]) % 1000000000;
		}

	}
	long long result = 0;
	for (int i = 0; i < 10; i++)
		result = (result + d[n][i]) % 1000000000;
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