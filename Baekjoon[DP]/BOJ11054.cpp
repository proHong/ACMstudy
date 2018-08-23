#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int A[1001];
int df[1001];
int dl[1001];
int d[1001];

int dp(int n)
{
	df[0] = 0;
	df[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		int max = 0;
		for (int j = 0; j < i; j++)
		{
			if (A[j]<A[i] && df[j]>max)
				max = df[j];
		}
		df[i] = max + 1;
	}
	dl[n] = 1;
	for (int i = n-1; i > 0; i--)
	{
		int max = 0;
		for (int j = n; j > i; j--)
		{
			if (A[j]<A[i] && dl[j]>max)
				max = dl[j];
		}
		dl[i] = max + 1;
	}

	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		d[i] = df[i] + dl[i] - 1;
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