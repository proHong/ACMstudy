#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int n;

vector<int> tree[100001];
int  visit[100001];
int parent[100001];

void dfs(int num)
{
	visit[num] = true;
	for (int i = 0; i < tree[num].size(); i++)
	{
		int node = tree[num][i];
		if (!visit[node])
		{
			parent[node] = num;
			dfs(node);
		}
	}
}


int main()
{
	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	dfs(1);
	for (int i = 2; i <= n; i++)
	{
		printf("%d\n", parent[i]);
	}

	return 0;
}