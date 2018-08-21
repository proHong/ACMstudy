#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	string str;
	while (getline(cin, str))
	{
		int p[4] = { 0 };
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i]>=97&&str[i]<=122)
				p[0]++;
			else if (str[i] >= 65 && str[i] <= 90)
				p[1]++;
			else if (str[i] >= 48 && str[i] <= 57)
				p[2]++;
			else if (str[i] == 32)
				p[3]++;
		}
		for (int i = 0; i < 4; i++)
			cout << p[i] << ' ';
		cout << '\n';
	}

	return 0;
}