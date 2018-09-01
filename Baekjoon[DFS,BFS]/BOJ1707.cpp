#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#pragma warning(disable : 4996) 
using namespace std;

vector<int> line[20001];
bool bvisit[20001];
int chk[20001];

queue<int> b;
int N, M;
bool check = true;

void bfs(int v)
{
	b.push(v);
	bvisit[v] = true;
	chk[v] = 1;
	while (!b.empty())
	{
		int x = b.front();
		b.pop();
		for (int i : line[x])
		{
			if (!bvisit[i])
			{
				b.push(i);
				bvisit[i] = true;
				if (chk[x] == 1)
					chk[i] = 2;
				else
					chk[i] = 1;
			}
			else if (bvisit[i] && chk[i] == chk[x])
				check = false;
		}
	}
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int j = 0; j < T; j++)
	{
		check = true;
		scanf("%d %d", &N, &M);
		for (int i = 1; i <= N; i++)
		{
			line[i].clear();
			bvisit[i] = false;
			chk[i] = 0;
		}
		for (int i = 0; i < M; i++)
		{
			int s, e;
			scanf("%d %d", &s, &e);
			line[s].push_back(e);
			line[e].push_back(s);
		}
		int ans = 0;
		for (int i = 1; i <= N; i++)
		{
			if (!bvisit[i])
			{
				bfs(i);
			}
		}
		if(check)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}