#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int w[11][11];

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> v(n);
	for (int i = 1; i <= n; i++)
	{
		v[i - 1] = i;
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &w[i][j]);
		}
	}
	long long ans = 0;
	bool ok = true;
	do {
		if (v[0] != 1)
			break;
		long long sum = 0;
		ok = true;
		for (int i = 0; i < n; i++)
		{
			int num;
			if (i == n - 1)
			{
				num = w[v[i]][v[0]];
				sum += num;
			}
			else
			{
				num = w[v[i]][v[i + 1]];
				sum += num;
			}
			if (num == 0)
			{
				ok = false;
			}
		}
		if (ans == 0 && ok)
			ans = sum;
		else if(ans != 0 && ok)
			ans = min(ans, sum);
	} while (next_permutation(v.begin(),v.end()));
	printf("%lld\n", ans);
	return 0;
}