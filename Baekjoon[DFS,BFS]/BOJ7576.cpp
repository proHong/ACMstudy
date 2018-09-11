#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };

int n, m, a[1003][1003];
queue<pair<int, int> > que;
queue<pair<int, int> > tempque;

void bfs()
{
	while (!que.empty()) {
		auto now = que.front();
		que.pop();

		int x = now.first, y = now.second;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny= y + dy[i];
			if (ny <= 0 || ny > n || nx <= 0 || nx > m) continue;
			if (a[ny][nx] == 0) {
				a[ny][nx] = 1;
				tempque.push({ nx,ny });
			}
		}
	}
}


int main() {

	scanf("%d %d", &m, &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] == 1) que.push({ j,i });
		}
	}
	int ans = -1;
	while (!que.empty()) {
		
		bfs();
		while (!tempque.empty())
		{
			auto temp = tempque.front();
			que.push(temp);
			tempque.pop();
		}
		ans++;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 0)
			{
				ans = -1;
				break;
			}
		}
		if (ans == -1)
			break;
	}



	printf("%d\n", ans);

	return 0;
}