#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <math.h>
#pragma warning(disable : 4996) 
using namespace std;

int n, m;
bool buttons[12];

int chk(int num)
{
	int ans = 0;
	if (num == 0)
		return !buttons[0];
	while (num)
	{
		if (buttons[num % 10])
			return 0;
		ans++;
		num /= 10;
	}
	return ans;
}
int main()
{

	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int b;
		scanf("%d", &b);
		buttons[b] = true;
	}
	int now = 100;
	int ans = 0;
	if (chk(n))
		ans = min(chk(n), abs(n - now));
	else
	{
		int t = 1;
		while (true)
		{
			int m = chk(n - t);
			int p = chk(n + t);
			if (m)
			{
				ans = min(m + t, abs(n - now));
				break;
			}
			if (p)
			{
				ans = min(p + t, abs(n - now));
				break;
			}
			t++;
		}
	}

	printf("%d\n", ans);



	return 0;
}