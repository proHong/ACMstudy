#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
#pragma warning(disable : 4996) 

char a[2188][2188];


void fillstar(int x, int y, int m, char c)
{
	for (int i = y; i < y + m; i++)
	{
		for (int j = x; j < x + m; j++)
		{
			a[i][j] = c;
		}
	}
}

void solve(int x, int y, int m)
{
	if (m == 1)
	{
		fillstar(x, y, m, '*');
	}
	else
	{
		int t = m / 3;
		for (int i = y; i < y + m; i += t)
		{
			for (int j = x; j < x + m; j += t)
			{
				if (i == y + t && j == x + t)
					fillstar(j, i, t, ' ');
				else
					solve(j, i, t);
			}
		}
	}

}


int main()
{
	int n;
	scanf("%d", &n);

	solve(0,0,n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}