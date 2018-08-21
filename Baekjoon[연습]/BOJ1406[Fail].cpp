#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string S;
	cin >> S;
	int line = 0;
	cin >> line;
	int cur = S.length();
	for (int i = 0; i < line; i++)
	{
		char temp;
		cin >> temp;
		if (temp == 'L')
		{
			cur--;
			if (cur < 0)
				cur = 0;
		}
		else if (temp == 'D')
		{
			cur++;
			if (cur > S.length())
				cur = S.length();
		}
		else if (temp == 'B')
		{
			if (cur > 0)
			{
				S = S.substr(0, cur - 1) + S.substr(cur, S.length());
				cur--;
			}
		}
		else if (temp == 'P')
		{
			char s;
			cin >> s;
			S = S.substr(0,cur) + s + S.substr(cur,S.length());
			cur++;
		}
	}
	cout << S << '\n';

	return 0;
}