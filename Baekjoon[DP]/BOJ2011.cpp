#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long d[5001];

long long dp(string s)
{
	if (s[0] == '0' && s.length() == 1)
		return 0;
	d[0] = 1;
	d[1] = 1;

	for (int i = 2; i <= s.length(); i++)
	{
		string st = s.substr(i - 2, 2);
		int a = atoi(st.c_str());
		if (a < 27 && s[i - 2] == '0')
			d[i] = d[i - 1] % 1000000;
		else if (a < 27 && s[i - 1] != '0')
			d[i] = (d[i - 2] + d[i - 1]) % 1000000;
		else if (s[i - 1] == '0' && a < 27)
			d[i] = d[i - 2] % 1000000;
		else if (s[i - 1] == '0' && a >= 27)
			d[i] = 0;
		else
			d[i] = d[i - 1] % 1000000;
	}
	return d[s.length()];
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	string str;
	cin >> str;

	cout << dp(str) << '\n';


	return 0;
}