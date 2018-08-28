#include <string>
#include <map>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	map<string, int> m = { { "black", 0 },{ "brown", 1 },{ "red", 2 },{ "orange", 3 },{ "yellow", 4 },{ "green", 5 },{ "blue", 6 },{ "violet", 7 },{ "grey", 8 },{ "white", 9 } };
	string a, b, c;
	cin >> a >> b >> c;

	long long result = (m[a] * 10 + m[b]) * pow(10, m[c]);
	cout << result << '\n';

	return 0;
}