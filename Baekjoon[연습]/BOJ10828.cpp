#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int line;
	cin >> line;
	for (int i = 0; i < line; i++)
	{
		string input;
		cin >> input;
		int num;
		if (input == "push")
		{
			cin >> num;
			v.push_back(num);
		}
		else if (input == "pop")
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
			{
				cout << v.back() << '\n';
				v.pop_back();
			}
		}
		else if (input == "size")
		{
			cout << v.size() << '\n';
		}
		else if (input == "empty")
		{
			if (v.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (input == "top")
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
				cout << v.back() << '\n';
		}
	}

	return 0;
}