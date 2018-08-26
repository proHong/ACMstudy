#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long five(long long num)
{
	long long count = 0;

	for (long long i = 5; num / i >= 1; i *= 5)
		count += num / i;
	return count;
}

long long two(long long num)
{
	long long count = 0;

	for (long long i = 2; num / i >= 1; i *= 2)
		count += num / i;
	return count;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long n, m;
	cin >> n >> m;
	int fivecount = (five(n) - five(m) - five(n - m));
	int twocount = (two(n) - two(m) - two(n - m));

	cout << min(fivecount, twocount) << '\n';

	return 0;
}