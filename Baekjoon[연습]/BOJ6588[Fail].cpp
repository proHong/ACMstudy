#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	while (true)
	{
		int N;
		cin >> N;
		if (N == 0)
			break;
		bool * number = new bool[N + 1]();
		vector<int> v;
		for (int i = 2; i <= N; i++)
		{
			if (number[i] == false)
			{
				if (i != 2)
					v.push_back(i);
				for (int j = 2; i*j <= N; j++)
				{
					number[i*j] = true;
				}
			}
		}
		bool t = false;
		for (int k = v.size() - 1; k >= 0; k--)
		{
			int a, b = v[k];
			for (int j = 0; j < k; j++)
			{
				if (v[j] == N - v[k])
				{
					a = v[j];
					cout << N << " = " << a << " + " << b << '\n';
					t = true;
					break;
				}
			}
			if (t) break;
		}
		delete[] number;

	}
	return 0;
}