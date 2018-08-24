#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long d[101];

long long dp(int n)
{
	d[0] = 0;
	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	d[4] = 2;
	for (int i = 5; i <= n; i++)
	{
		d[i] = d[i - 5] + d[i - 1];
	}

	return d[n];
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		cout << dp(N) << '\n';
	}

	return 0;
}