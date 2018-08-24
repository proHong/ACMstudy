#include <iostream>
#include <vector>
#include <string>
using namespace std;

void cal(long long N)
{
	if (N == 0)
		return;
	else if (N%-2 == 0)
	{
		cal(N / -2);
		cout << 0;
	}
	else if (N>0)
	{
		cal(N / -2);
		cout << 1;
	}
	else
	{
		cal((N - 1) / -2);
		cout << 1;
	}
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long N;
	cin >> N;
	if (N == 0)
	{
		cout << 0 << '\n';
		return 0;
	}
	cal(N);

	return 0;
}