#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

vector<int> line[1001];
int dvisit[1001];
int bvisit[1001];

queue<int> b;

void dfs(int v)
{
	dvisit[v] = true;
	printf("%d ", v);
	for (int i : line[v])
	{
		if (!dvisit[i])
			dfs(i);
	}
}

void bfs(int v)
{
	b.push(v);
	bvisit[v] = true;
	while (!b.empty())
	{
		int x = b.front();
		b.pop();
		printf("%d ", x);
		for (int i : line[x])
		{
			if (!bvisit[i])
			{
				b.push(i);
				bvisit[i] = true;
			}
		}
	}
}

int main()
{
	int N, M, V;
	scanf("%d %d %d", &N, &M, &V);

	for (int i = 0; i < M; i++)
	{
		int s, e;
		scanf("%d %d", &s, &e);
		line[s].push_back(e);
		line[e].push_back(s);
	}
	for (int i = 1; i <= N; i++)
		sort(line[i].begin(), line[i].end());
	dfs(V);
	printf("\n");
	bfs(V);

	return 0;
}