#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<long long> temp;


long long dp(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else if (temp[n] != -1)
		return temp[n];
	temp[n] = dp(n - 1) + dp(n - 2);
	return temp[n];
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	temp.resize(n + 1, -1);
	cout << dp(n) << '\n';

	return 0;
}