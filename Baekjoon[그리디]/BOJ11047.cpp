#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

int n;
long long k;
long long a[11];


int main()
{
	scanf("%d %lld", &n, &k);
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
	}
	int cnt = 0;
	long long now = k;

	for (int i = n; i > 0; i--)
	{
		if (now == 0)
			break;
		if (a[i] <= now)
		{
			cnt += now / a[i];
			now %= a[i];
		}
	}
	printf("%d", cnt);

	return 0;
}