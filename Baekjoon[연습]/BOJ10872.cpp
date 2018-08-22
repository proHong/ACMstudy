#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int f(int n)
{
	if (n > 1)
		return n * f(n - 1);
	else
		return 1;
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	cout << f(N) << '\n';

	return 0;
}