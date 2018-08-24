#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int d[1000001];

int dp(int n)
{
	d[0] = 0;
	d[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		d[i] = i;
		for(int j = 1;j*j<=i;j++)
		{
			d[i] = min(d[i], d[i - j * j] + 1);
		}
	}

	return d[n];
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	cout << dp(N) << '\n';


	return 0;
}