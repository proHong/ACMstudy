#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int n, m;
int a[51][51];
int b[51][51];

void flip(int x, int y)
{
	for (int i = y; i <= y+2; i++)
	{
		for (int j = x; j <= x+2; j++)
		{
			a[i][j] = !a[i][j];
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
			scanf("%1d", &a[i][j]);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%1d", &b[i][j]);
		}
	}
	int ans = 0;

	for (int i = 1; i <= n-2; i++)
	{
		for (int j = 1; j <= m-2; j++)
		{
			if (a[i][j] != b[i][j])
			{
				flip(j, i);
				ans++;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i][j] != b[i][j])
			{
				printf("-1\n");
				return 0;
			}
		}
	}
	printf("%d\n", ans);



	return 0;
}