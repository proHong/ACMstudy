#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int d[31];

int dp(int n)
{
	d[0] = 1;
	d[1] = 0;
	d[2] = 3;
	for (int i = 3; i <= n; i++)
	{
		if (i % 2 != 0)
			d[i] = 0;
		else
		{
			d[i] = 3 * d[i - 2];
			for (int j = i - 4; j >= 0; j = j - 2)
				d[i] += 2 * d[j];
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