#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#pragma warning(disable : 4996) 

int main()
{
	int m;
	scanf("%d", &m);
	char input[20];
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		scanf("%s", input);
		if (strcmp(input, "add") == 0)
		{
			int x;
			scanf("%d", &x);
			s = (s | (1 << x));
		}
		else if (strcmp(input, "remove") == 0)
		{
			int x;
			scanf("%d", &x);
			s = (s & ~ (1 << x));
		}
		else if (strcmp(input, "check") == 0)
		{
			int x;
			scanf("%d", &x);
			int chk = (s & (1 << x));
			if (chk)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (strcmp(input, "toggle") == 0)
		{
			int x;
			scanf("%d", &x);
			s = (s ^ (1 << x));
		}
		else if(strcmp(input,"all") == 0)
		{
			s = (1<<21) - 1;
		}
		else if (strcmp(input, "empty") == 0)
		{
			s = 0;
		}
	}


	return 0;
}