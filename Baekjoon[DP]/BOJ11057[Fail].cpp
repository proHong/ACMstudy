#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long temp[1001][10];

int dp(int n)
{
	if (n > 1)
		dp(n - 1);
	else if (n == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			temp[n][i] = 1;
		}
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j <= i; j++)
				temp[n][i] += temp[n - 1][j];
			temp[n][i] = temp[n][i];
		}
	}
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += temp[n][i];
	}


	return result % 10007;
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