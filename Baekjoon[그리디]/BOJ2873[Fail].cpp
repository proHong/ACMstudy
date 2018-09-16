#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int r, c;
int m[1001][1001];

int main()
{
	scanf("%d %d", &r, &c);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	string ans = "";
	if (r % 2 == 0 && c % 2 != 0)
	{
		for (int i = 0; i < c; i++)
		{
			if (i % 2 == 0)
			{
				ans += 'D'*(r-1);
			}
			else
			{
				ans += 'U'*(r - 1);
			}
			if(i != c-1)
				ans += 'R';
		}
	}
	else if (r % 2 != 0)
	{
		for (int i = 0; i < r; i++)
		{
			if (i % 2 == 0)
			{
				ans += 'R'*(c - 1);
			}
			else
			{
				ans += 'L'*(c - 1);
			}
			if (i != r - 1)
				ans += 'D';
		}
	}
	else
	{

	}

	printf("%s\n", ans);

	return 0;
}