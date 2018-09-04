#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

int board[101][101];
int visit[101][101];
int n, m;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
queue<pair<int, int>> q;


void bfs(int x, int y)
{
	q.push({ x,y });
	visit[y][x] = true;
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (nx <= 0 || nx > m || ny <= 0 || ny > n)continue;
			if (!visit[ny][nx] && board[ny][nx] == 1)
			{
				q.push({ nx,ny });
				visit[ny][nx] = true;
				board[ny][nx] = board[y][x] + 1;
			}
		}
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%1d", &board[i][j]);
		}
	}
	board[1][1] = 2;
	bfs(1, 1);

	printf("%d\n", board[n][m]-1);
	
	return 0;
}