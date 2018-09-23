#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
#pragma warning(disable : 4996) 

int a[2188][2188];

int n;
int cnt[3];

bool same(int x, int y, int m)
{
	if (m == 1)
		return true;
	for (int i = y; i < y+m; i++)
	{
		for (int j = x; j < x+m; j++)
		{
			if (a[y][x] != a[i][j])
				return false;
		}
	}
	return true;
}

void solve(int x,int y,int m)
{
	if (same(x, y, m))
	{
		cnt[a[y][x] + 1]++;
	}
	else
	{
		int t = m / 3;
		for (int i = y; i < y + m; i += t)
		{
			for (int j = x; j < x + m; j += t)
			{
				solve(j, i, t);
			}
		}
	}

}


int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	solve(0, 0, n);
	for (int i = 0; i<3; i++)
	{
		printf("%d\n", cnt[i]);
	}

	return 0;
}