#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int line[1001];
bool dvisit[1001];

void dfs(int v)
{
	dvisit[v] = true;
	if (!dvisit[line[v]])
		dfs(line[v]);
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
			line[i] = 0;
			dvisit[i] = false;
		}
		for (int i = 1; i <= N; i++)
		{
			int l;
			scanf("%d", &l);
			line[i] = l;
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
		printf("%d\n", ans);
	}

	return 0;
}