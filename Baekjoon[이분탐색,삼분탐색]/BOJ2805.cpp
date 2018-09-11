#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

long long tree[1000001];
int n;
long long m;

long long bs(long long s, long long e)
{
	long long mid = (s + e) / 2;
	while (s <= e)
	{
		long long sum = 0;
		for (int i = 1; i <= n; i++)
		{
			if(tree[i] - mid>0)
				sum += tree[i] - mid;
		}
		if (sum >= m)
			s = mid + 1;
		else
			e = mid - 1;
		mid = (s + e) / 2;
	}
	return mid;
}

int main()
{
	scanf("%d %lld", &n, &m);
	long long e = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &tree[i]);
		e = max(e, tree[i]);
	}

	printf("%lld\n", bs(1, e));

	return 0;
}