#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
#pragma warning(disable : 4996) 

int a[65][65];

int n;

bool same(int x, int y, int m)
{
	if (m == 1)
		return true;
	for (int i = y; i < y + m; i++)
	{
		for (int j = x; j < x + m; j++)
		{
			if (a[y][x] != a[i][j])
				return false;
		}
	}
	return true;
}

void solve(int x, int y, int m)
{
	if (same(x, y, m))
	{
		printf("%d", a[y][x]);
	}
	else
	{
		int t = m / 2;
		printf("(");
		for (int i = y; i < y + m; i += t)
		{
			for (int j = x; j < x + m; j += t)
			{
				solve(j, i, t);
			}
		}
		printf(")");
	}

}


int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	solve(0, 0, n);

	return 0;
}