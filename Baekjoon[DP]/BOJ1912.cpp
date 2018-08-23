#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int A[100001];
int d[100001];

int dp(int n)
{
	d[1] = A[1];
	for (int i = 2; i <= n; i++)
	{
		d[i] = max(d[i - 1] + A[i], A[i]);
	}
	int result = A[1];
	for (int i = 1; i <= n; i++)
	{
		result = max(d[i], result);
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