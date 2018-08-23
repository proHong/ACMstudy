#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long temp[101][10];

int dp(int n)
{
	if (n >= 1)
		dp(n - 1);
	if (n == 0)
	{
		for (int i = 0; i < 10; i++)
		{
			temp[n][i] = 0;
		}
	}
	else if (n == 1)
	{
		temp[n][0] = 0;
		for (int i = 1; i < 10; i++)
		{
			temp[n][i] = 1;
		}
	}
	else
	{
		temp[n][0] = temp[n - 1][1];
		temp[n][9] = temp[n - 1][8];
		for (int i = 1; i < 9; i++)
		{
			temp[n][i] = temp[n - 1][i - 1] + temp[n - 1][i + 1];
		}
	}
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += temp[n][i];
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