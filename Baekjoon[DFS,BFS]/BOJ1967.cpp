#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int n, ans = 0, s;

vector<pair<int, int>> tree[100001];
int  visit[100001];
int parent[100001];

void dfs(int num, int dist)
{
	visit[num] = true;
	if (dist > ans)
	{
		ans = dist;
		s = num;
	}
	for (auto i : tree[num])
	{
		if (!visit[i.first])
		{
			dfs(i.first, dist + i.second);
		}
	}
}


int main()
{
	scanf("%d", &n);

	int a, b, c;
	for (int i = 1; i < n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		tree[a].push_back({ b,c });
		tree[b].push_back({ a,c });
	}
	dfs(1, 0);
	ans = 0;
	fill_n(visit, n + 1, 0);
	dfs(s, 0);
	printf("%d\n", ans);

	return 0;
}