#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool number[1000002];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;
	number[0] = true;
	number[1] = true;
	for (int i = 2; i <= 10000; ++i)
	{
		if (number[i] == false)
		{
			if (i != 2)
				v.push_back(i);
			for (int j = 2; i*j <= 1000000; ++j)
			{
				number[i*j] = true;
			}
		}
	}
	number[2] = true;
	sort(v.begin(), v.end());
	while (true)
	{
		int N;
		cin >> N;
		if (N == 0)
			break;

		bool t = false;
		int i = 0;
		for (i = 0; i < v.size(); i++)
		{
			if (v[i] > N)
				break;
		}
		for (int k = i - 1; k >= 0; k--)
		{
			int a, b = v[k];
			if (number[N - v[k]] == false)
			{
				a = N - v[k];
				if (a > b)
					swap(a, b);
				cout << N << " = " << a << " + " << b << '\n';
				t = true;
				break;
			}
		}
		if (!t)
			cout << "Goldbach's conjecture is wrong." << '\n';

	}
	return 0;
}