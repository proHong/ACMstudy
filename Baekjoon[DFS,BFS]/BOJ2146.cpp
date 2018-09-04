#include <string>
#include <vector>
#include <set>
#include <cstdio>
#include <algorithm>
#include <cmath>
#pragma warning(disable : 4996) 
using namespace std;

int N;
int M[101][101];
int dvisit[101][101];
vector<pair<pair<int, int>, int>> v;
int temp = 1;
int mini = 10000;
int dfs(int x, int y)
{
	if (M[y][x] == 0)
		return 0;
	dvisit[y][x] = true;
	int ans = 1;
	if (y + 1 <= N)
	{
		if (!dvisit[y+1][x])
		{
			if (M[y+1][x] != 0)
				ans += dfs(x, y + 1);
			else
			{
				v.push_back({ {x,y}, temp });
			}
		}
	}
	if (x + 1 <= N)
	{
		if (!dvisit[y][x + 1])
		{
			if (M[y][x + 1] != 0)
				ans += dfs(x + 1, y);
			else
			{
				v.push_back({ { x,y }, temp });
			}
		}
	}
	if (x - 1 > 0)
	{
		if (!dvisit[y][x - 1])
		{
			if (M[y][x - 1] != 0)
				ans += dfs(x - 1, y);
			else
			{
				v.push_back({ { x,y }, temp });
			}
		}
	}
	if (y - 1 > 0)
	{
		if (!dvisit[y - 1][x])
		{
			if (M[y - 1][x] != 0)
				ans += dfs(x, y - 1);
			else
			{
				v.push_back({ { x,y }, temp });
			}
		}
	}
	return ans;
}

int main()
{

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			int l;
			scanf("%1d", &l);
			M[i][j] = l;
		}
	}
	multiset<int> ans;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (!dvisit[i][j])
			{
				int t = dfs(j, i);
				if (t > 0)
				{
					ans.insert(temp);
					temp++;
				}
			}
		}
	}
	sort(v.begin(), v.end());
	auto it = unique(v.begin(), v.end());
	v.erase(it, v.end());
	for (auto i : v)
	{
		for (auto j : v)
		{
			if (i.second != j.second)
			{
				int dist = abs(i.first.first - j.first.first) + abs(i.first.second - j.first.second) - 1;
				mini = min(mini, dist);
			}
		}
	}
	printf("%d\n", mini);



	return 0;
}