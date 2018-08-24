#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int p[1001];
long long d[1001];

long long dp(int n)
{
	d[0] = 0;
	d[1] = p[1];

	for (int i = 2; i <= n; i++)
	{
		d[i] = 0;
		for (int j = 1; j <= i; j++)
		{
			d[i] = max(d[i], d[i - j] + p[j]);
		}
	}
	return d[n];
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> p[i];
	cout << dp(n) << '\n';


	return 0;
}