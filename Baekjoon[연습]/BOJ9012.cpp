#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int line;
	cin >> line;
	for (int i = 0; i < line; i++)
	{
		string input;
		cin >> input;
		int vps = 0;
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == '(')
				vps++;
			else if (input[j] == ')')
				vps--;
			if (vps < 0)
				break;
		}
		if (vps == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}