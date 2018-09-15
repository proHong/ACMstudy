#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int n;
vector<pair<int, int>> es;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		es.push_back({ b,a });
	}
	sort(es.begin(), es.end());
	int ans = 0;
	int now = 0;
	for (auto i : es)
	{
		if (i.second >= now)
		{
			ans++;
			now = i.first;
		}
	}
	printf("%d\n", ans);

	return 0;
}