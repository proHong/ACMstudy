#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

long long home[200001];
int n, c;
long long ans = 0;


long long bs(long long s, long long e)
{
	long long sum = 0;
	long long mid = (s + e) / 2;
	while (s <= e)
	{
		long long wc = 1;
		long long p = home[1];
		for (int i = 2; i <= n; i++)
		{
			if (home[i] - p >= mid)
			{
				wc++;
				p = home[i];
			}
		}
		if (wc >= c)
			s = mid + 1;
		else
			e = mid - 1;
		mid = (s + e) / 2;
	}
	return mid;
}

int main()
{
	scanf("%d %d", &n, &c);
	long long e = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &home[i]);
		e = max(e, home[i]);
	}
	sort(home, home + n + 1);


	printf("%lld\n", bs(1, e));

	return 0;
}