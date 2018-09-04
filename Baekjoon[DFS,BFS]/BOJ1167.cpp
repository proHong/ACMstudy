#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int n, ans = 0, s;

vector<pair<int,int>> tree[100001];
int  visit[100001];
int parent[100001];

void dfs(int num,int dist)
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

	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d", &a);
		while (true)
		{
			scanf("%d", &b);
			if (b == -1)
				break;
			scanf("%d", &c);
			tree[a].push_back({ b,c });
		}
	}
	dfs(1,0);
	ans = 0;
	fill_n(visit, n+1, 0);
	dfs(s, 0);
	printf("%d\n", ans);

	return 0;
}