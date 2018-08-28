#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;


int bestInvitation(vector<string> first, vector<string> second)
{
	int result = 1;
	map<string, int> m;

	for (int i = 0; i < first.size(); i++)
	{
		m[first[i]] = 0;
		m[second[i]] = 0;
	}

	for (int i = 0; i < first.size(); i++)
	{
		m[first[i]]++;
		m[second[i]]++;
	}
	int res = 0;
	for (auto it = m.begin(); it != m.end(); ++it)
	{
		res = max(res, it->second);
	}

	return res;
}

vector<string> strcut(string str)
{
	vector<string> v;
	int start = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ',')
		{
			string temp = str.substr(start, i - start);
			v.push_back(temp);
			start = i + 2;
		}
		if (i == str.length() - 1)
		{
			string temp = str.substr(start, i - start + 1);
			v.push_back(temp);
		}
	}
	return v;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<string> first;
	vector<string> second;

	string input;
	cout << "first = ";
	getline(cin, input);
	input = input.substr(1, input.size() - 2);
	first = strcut(input);
	cout << "second = ";
	getline(cin, input);
	input = input.substr(1, input.size() - 2);
	second = strcut(input);

	int result = bestInvitation(first, second);

	cout << "Returns: " << result << '\n';



	return 0;
}