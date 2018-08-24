#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	string str;
	cin >> str;
	
	vector<char> v;
	int result = 0;
	v.push_back(str[0]);
	for (int i = 1; i < str.length(); i++)
	{
		if (str[i] == ')' && str[i - 1] == '(')
		{
			v.pop_back();
			result += v.size();
		}
		else if (str[i] == '(')
			v.push_back(str[i]);
		else
		{
			v.pop_back();
			result++;
		}
	}
	cout << result << '\n';
	return 0;
}