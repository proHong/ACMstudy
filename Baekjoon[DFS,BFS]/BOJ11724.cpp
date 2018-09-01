#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#pragma warning(disable : 4996) 
using namespace std;

int line[1001][1001];
bool dvisit[1001];
int N, M;

void dfs(int v)
{
	dvisit[v] = true;
	for (int i = 1; i <= N; i++)
	{
		if (!dvisit[i] && line[v][i] == 1)
		{
			dfs(i);
		}
	}
}

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		int s, e;
		scanf("%d %d", &s, &e);
		line[s][e] = 1;
		line[e][s] = 1;
	}
	int ans = 0;
	for (int i = 1; i <= N; i++)
	{
		if (!dvisit[i])
		{
			dfs(i);
			ans++;
		}
	}
	printf("%d", ans);

	return 0;
}