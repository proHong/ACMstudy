#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

char friends[50][50];


int highestScore(vector<string> v)
{
	int vsize = v.size();
	for (int i = 0;i<v.size();i++)
	{
		for (int j = 0; j<v[i].length(); j++)
		{
			friends[i][j] = v[i][j];
		}
	}
	int ans = 0;
	
	for (int i = 0; i < vsize; i++)
	{
		int cnt = 0;
		for (int j = 0; j < vsize; j++)
		{
			if (i == j)continue;
			if (friends[i][j] == 'Y')cnt++;
			else {
				for (int k = 0; k < vsize; k++)
				{
					if (friends[j][k] == 'Y' && friends[k][i] == 'Y')
					{
						cnt++;
						break;
					}
				}
			}
		}
		ans = max(ans, cnt);
	}
	return ans;
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

	vector<string> v;
	string input;
	cout << "first = ";
	getline(cin, input);
	input = input.substr(1, input.size() - 2);
	v = strcut(input);


	int result = highestScore(v);


	cout << "Returns: " << result << '\n';

	return 0;
}