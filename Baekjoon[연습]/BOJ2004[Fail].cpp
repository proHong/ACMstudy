#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long n, m;
	cin >> n >> m;
	int count = 0;
	for (int i = n - m + 1; i <= n; i++)
	{
		if (i % 625 == 0) count += 4;
		else if (i % 125 == 0) count += 3;
		else if (i % 25 == 0) count += 2;
		else if (i % 5 == 0)count++;
	}
	for (int i = 1; i <= m; i++)
	{
		if (i % 625 == 0) count -= 4;
		else if (i % 125 == 0) count -= 3;
		else if (i % 25 == 0) count -= 2;
		else if (i % 5 == 0)count--;
	}
	cout << count << '\n';

	return 0;
}