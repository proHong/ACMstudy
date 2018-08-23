#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int a[10001];
int d[10001];

int dp(int n)
{
	d[0] = 0;
	d[1] = a[1];
	d[2] = d[1] + a[2];

	for (int i = 3; i <= n; i++)
	{
		d[i] = max(max(d[i - 3] + a[i - 1] + a[i], d[i - 1]), d[i - 2] + a[i]);
	}


	return d[n];
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	int n;
	cin >> n;
	for (int j = 1; j <= n; j++)
		cin >> a[j];

	cout << dp(n) << '\n';


	return 0;
}