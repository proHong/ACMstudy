#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main()
{
	queue<int> v;
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
			v.push(num);
		}
		else if (input == "pop")
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
			{
				cout << v.front() << '\n';
				v.pop();
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
		else if (input == "front")
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
				cout << v.front() << '\n';
		}
		else if (input == "back")
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
				cout << v.back() << '\n';
		}
	}

	return 0;
}