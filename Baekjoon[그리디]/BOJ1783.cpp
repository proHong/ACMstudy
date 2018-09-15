#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int n, m;

int main()
{
	scanf("%d %d", &n, &m);
	int ans = 0;
	if (n == 1)
		ans = 1;
	else if (n == 2)
		ans = min(4, (m + 1) / 2);
	else
	{
		if (m <= 6)
			ans = min(4, m);
		else
			ans = m - 2;
	}

	printf("%d", ans);
	
	return 0;
}