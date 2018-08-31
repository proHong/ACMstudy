#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;


int find(string s)
{
	for (int i = s.length();; i++)
	{
		bool ok = true;

		for (int j = 0; j < s.length(); j++)
		{
			if ((i - j - 1) < s.length() && s[j] != s[i - j - 1])
			{
				ok = false;
				break;
			}
		}
		if (ok)
			return i;
	}
	return 0;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cout << "s = ";
	cin >> s;


	int result = find(s);


	cout << "Returns: " << result << '\n';

	return 0;
}