#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	cout << (a + b) % c << '\n';
	cout << (a % c + b % c) % c << '\n';
	cout << (a * b) % c << '\n';
	cout << (a % c * b % c) % c << '\n';

	return 0;
}