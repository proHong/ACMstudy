#include <string>
#include <queue>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;
#define MAX 200000
int n, k;
queue<int> q;
bool chk[MAX + 1];
int dist[MAX + 1];

void bfs()
{
	q.push(n);
	chk[n] = true;
	dist[n] = 0;
	while (!q.empty() && chk[k] == false)
	{
		int temp = q.front();
		q.pop();
		if (temp -1 >= 0)
		{
			if (chk[temp - 1] == false)
			{
				q.push(temp - 1);
				chk[temp - 1] = true;
				dist[temp - 1] = dist[temp] + 1;
			}
		}
		if (temp + 1 < MAX)
		{
			if (chk[temp + 1] == false)
			{
				q.push(temp + 1);
				chk[temp + 1] = true;
				dist[temp + 1] = dist[temp] + 1;
			}
		}
		if (temp * 2 < MAX)
		{
			if (chk[temp*2] == false)
			{
				q.push(temp*2);
				chk[temp*2] = true;
				dist[temp*2] = dist[temp] + 1;
			}
		}
	}

}

int main()
{
	scanf("%d %d", &n, &k);

	bfs();

	printf("%d\n", dist[k]);

	return 0;
}