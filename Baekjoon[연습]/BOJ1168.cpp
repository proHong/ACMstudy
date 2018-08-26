#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	vector<int> v;

	for (int i = 1; i <= n; i++)
		v.push_back(i);
	int pos = 0;
	cout << '<';
	while (v.size() != 0)
	{
		if (v.size() == 1)
		{
			cout << v[0];
			break;
		}
		else
		{
			pos = (pos + m - 1) % v.size();
			cout << v[pos] << ", ";
			v.erase(v.begin() + pos);
		}

	}
	cout << '>';

	return 0;
}