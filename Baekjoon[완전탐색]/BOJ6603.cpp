#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;


int main()
{
	while (true)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &v[i]);
		}
		vector<int> d;
		for (int i = 0; i < n - 6; i++)
		{
			d.push_back(0);
		}
		for (int i = 0; i < 6; i++)
		{
			d.push_back(1);
		}
		vector<vector<int>> ans;
		do {
			vector<int> temp;
			for (int i = 0; i < n; i++)
			{
				if (d[i] == 1)
				{
					temp.push_back(v[i]);
				}
			}
			ans.push_back(temp);
		} while (next_permutation(d.begin(), d.end()));
		sort(ans.begin(), ans.end());
		for (auto &i : ans)
		{
			for (auto j : i)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}