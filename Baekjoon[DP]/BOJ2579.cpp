#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int A[100001];
int d[100001];

int dp(int n)
{
	d[0] = A[0];
	d[1] = A[1];
	d[2] = A[1] + A[2];
	for (int i = 3; i <= n; i++)
	{
		d[i] = max(d[i - 2] + A[i], d[i - 3] + A[i-1] + A[i]);
	}

	return d[n];
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