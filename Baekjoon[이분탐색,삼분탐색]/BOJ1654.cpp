#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

long long line[10001];
int k, n;

long long bs(long long s, long long e)
{
	long long mid = (s + e) / 2;
	while (s <= e)
	{
		int sum = 0;
		for (int i = 1; i <= k; i++)
			sum += line[i] / mid;
		if (sum >= n)
			s = mid + 1;
		else
			e = mid - 1;
		mid = (s + e) / 2;
	}
	return mid;
}

int main() 
{
	scanf("%d %d", &k, &n);
	long long e = 0;
	for (int i = 1; i <= k; i++)
	{
		scanf("%lld", &line[i]);
		e = max(e, line[i]);
	}
	
	printf("%lld", bs(1, e));

	return 0;
}