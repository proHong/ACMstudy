#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

int n, m, k;


int main()
{
	scanf("%d %d %d", &n, &m, &k);
	int ans = min({ n / 2, m,(n + m - k) / 3 });

	std::printf("%d\n", ans);

	return 0;
}