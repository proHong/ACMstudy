#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

int main()
{
	deque<int> v;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int line;
	cin >> line;
	for (int i = 0; i < line; i++)
	{
		string input;
		cin >> input;
		int num;
		if (input == "push_front")
		{
			cin >> num;
			v.push_front(num);
		}
		else if (input == "push_back")
		{
			cin >> num;
			v.push_back(num);
		}
		else if (input == "pop_front")
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
			{
				cout << v.front() << '\n';
				v.pop_front();
			}
		}
		else if (input == "pop_back")
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