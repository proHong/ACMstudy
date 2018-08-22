#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	bool * number = new bool[N + 1]();
	vector<int> v;
	for (int i = 2; i <= N; i++)
	{
		if (number[i] == false)
		{
			v.push_back(i);
			for (int j = 2; i*j <= N; j++)
			{
				number[i*j] = true;
			}
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (N%v[i] == 0)
		{
			N = N / v[i];
			cout << v[i] << '\n';
			i = -1;
		}
	}

	return 0;
}