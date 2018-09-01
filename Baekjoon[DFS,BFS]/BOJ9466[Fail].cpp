#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int line[100001];
int dvisit[100001];

int dfs(int s, int v, vector<pair<int,int>> m)
{
	dvisit[v] = true;
	m.push_back({ v,m.size() });
	if (!dvisit[line[v]])
		return dfs(s, line[v],m);
	else
	{
		for (auto i : m)
		{
			if (line[v] == i.first)
				return m.size() - i.second;
		}
		return 0;
	}
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		int N;
		scanf("%d", &N);

		for (int i = 1; i <= N; i++)
		{
			int l;
			scanf("%d", &l);
			line[i] = l;
			dvisit[i] = false;
		}
		int ans = N;
		for (int i = 1; i <= N; i++)
		{
			vector<pair<int,int>> m;
			if (!dvisit[i])
			{
				ans -= dfs(i, i, m);
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}