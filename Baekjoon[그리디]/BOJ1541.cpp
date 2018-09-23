#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	string str;
	cin >> str;
	bool plus = true;
	int ans = 0;
	string temp = "";
	for (auto i : str)
	{
		if (i == '+')
		{
			if (plus)
				ans += stoi(temp);
			else
				ans -= stoi(temp);
			temp = "";
		}
		else if (i == '-')
		{
			if (plus)
				ans += stoi(temp);
			else
				ans -= stoi(temp);
			plus = false;
			temp = "";
		}
		else
		{
			temp += i;
		}
	}
	if (plus)
		ans += stoi(temp);
	else
		ans -= stoi(temp);

	cout << ans << '\n';

	return 0;
}