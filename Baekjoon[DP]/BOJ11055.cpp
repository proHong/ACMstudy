#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int A[1001];
int d[1001];

int dp(int n)
{
	d[0] = 0;
	d[1] = A[1];
	for (int i = 2; i <= n; i++)
	{
		int max = 0;
		for (int j = 0; j < i; j++)
		{
			if (A[j]<A[i] && d[j]>max)
				max = d[j];
		}
		d[i] = max + A[i];
	}
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result = max(result, d[i]);
	}

	return result;
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}
	cout << dp(N) << '\n';


	return 0;
}