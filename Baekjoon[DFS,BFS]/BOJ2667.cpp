#include <string>
#include <vector>
#include <set>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int N;
int M[26][26];
int dvisit[26][26];

int dfs(int x, int y)
{
	dvisit[x][y] = true;
	int ans = 0;
	if (M[x][y] == 0)
		return ans;
	else
		ans++;
	if (y + 1 <= N)
		if (!dvisit[x][y+1])
			ans += dfs(x,y+1);
	if (x + 1 <= N)
		if (!dvisit[x+1][y])
			ans += dfs(x+1, y);
	if (x - 1 > 0)
		if (!dvisit[x - 1][y])
			ans += dfs(x - 1, y);
	if (y - 1 > 0)
		if (!dvisit[x][y-1])
			ans += dfs(x, y-1);
	return ans;
}

int main()
{

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			int l;
			scanf("%1d", &l);
			M[i][j] = l;
		}
	}
	multiset<int> ans;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (!dvisit[i][j])
			{
				int temp = dfs(i, j);
				if(temp >0)
					ans.insert(temp);
			}
		}
	}
	printf("%d\n", ans.size());
	for (auto i = ans.begin(); i != ans.end(); ++i)
	{
		printf("%d\n",*i);
	}



	return 0;
}