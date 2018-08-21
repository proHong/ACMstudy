#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int count[26] = { 0 };

	string S;
	cin >> S;
	string * str = new string[S.length()];
	for (int i = 0; i < S.length(); i++)
	{
		str[i] = S.substr(i, S.length());
	}
	sort(str, str + S.length());
	for (int i = 0; i < S.length(); i++)
		cout << str[i] << '\n';

	return 0;
}