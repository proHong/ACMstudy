#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };

int n, m, a[1003][1003];
queue<pair<int, int> > que;

int main() {

	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] == 1) que.push({ i,j });
		}
	}

	while (!que.empty()) {
		auto now = que.front();
		que.pop();

		int y = now.first, x = now.second;

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i], nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if (a[ny][nx] == 0) {
				a[ny][nx] = a[y][x] + 1;
				que.push({ ny,nx });
			}
		}
	}

	int mx = -1e9;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!a[i][j]) return !printf("-1");;
			mx = max(mx, a[i][j]);
		}
	}

	printf("%d", mx - 1);

	return 0;
}