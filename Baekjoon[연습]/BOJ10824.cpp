#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num[4];
	cin >> num[0] >> num[1] >> num[2] >> num[3];
	string a, b;

	a = to_string(num[0]) + to_string(num[1]);
	b = to_string(num[2]) + to_string(num[3]);
	cout << atoll(a.c_str()) + atoll(b.c_str()) << '\n';

	return 0;
}