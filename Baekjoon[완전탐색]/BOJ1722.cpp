#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
#pragma warning(disable : 4996) 

vector<int> v;
bool chk[21];
vector<int> ansv;

long long fac(int n)
{
	if (n == 0)
		return 0;
	long long factorial = 1;
	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;
	}
	return factorial;
}

int main()
{
	int m;
	scanf("%d", &m);
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
	    long long temp;
		scanf("%lld", &temp);
		vector<int> a(m);
		for (int k = 0; k < m; k++)
		{
			for (int j = 1; j <= m; j++) {
				if (k == m - 1 && chk[j] == false)
				{
					a[k] = j;
					chk[j] = true;
					break;
				}

				if (chk[j] == true) continue;
				if (fac(m - k - 1) < temp) {
					temp -= fac(m - k - 1);
				}
				else {
					a[k] = j;
					chk[j] = true;
					break;
				}
			}
		}
		for (auto i : a)
		{
			printf("%d ", i);
		}

	}
	else if (num == 2)
	{
		long long ans = 1;
		for (int i = m; i > 1; i--)
		{
			int temp;
			scanf("%d", &temp);
			for (int j = 1; j < temp; j++)
			{
				if (chk[j] == false)
				{
					ans += fac(i-1);
				}
			}
			chk[temp] = true;
		}
		printf("%lld", ans);
	}



	return 0;
}