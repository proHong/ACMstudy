#include <string>
#include <vector>
#include <set>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int w, h;
int M[51][51];
int dvisit[51][51];

int dfs(int x, int y)
{
	dvisit[y][x] = true;
	int ans = 0;
	if (M[y][x] == 0)
		return ans;
	else
		ans++;
	if (x + 1 <= w && y + 1 <= h)
		if (!dvisit[y + 1][x + 1])
			ans += dfs(x + 1, y + 1);
	if (x - 1 > 0 && y - 1 > 0)
		if (!dvisit[y - 1][x - 1])
			ans += dfs(x - 1, y - 1);
	if (x + 1 <= w && y - 1 > 0)
		if (!dvisit[y - 1][x + 1])
			ans += dfs(x + 1, y - 1);
	if (x - 1 > 0 && y + 1 <= h)
		if (!dvisit[y + 1][x - 1])
			ans += dfs(x - 1, y + 1);
	if (y + 1 <= h)
		if (!dvisit[y + 1][x])
			ans += dfs(x, y + 1);
	if (x + 1 <= w)
		if (!dvisit[y][x + 1])
			ans += dfs(x + 1, y);
	if (x - 1 > 0)
		if (!dvisit[y][x - 1])
			ans += dfs(x - 1, y);
	if (y - 1 > 0)
		if (!dvisit[y - 1][x])
			ans += dfs(x, y - 1);
	return ans;
}

int main()
{
	while (true)
	{
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0)
			return 0;


		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				int l;
				scanf("%d", &l);
				M[i][j] = l;
				dvisit[i][j] = false;
			}
		}
		multiset<int> ans;
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (!dvisit[i][j])
				{
					int temp = dfs(j, i);
					if (temp > 0)
						ans.insert(temp);
				}
			}
		}
		printf("%d\n", ans.size());

	}

	return 0;
}