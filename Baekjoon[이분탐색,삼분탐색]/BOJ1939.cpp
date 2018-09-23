#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#pragma warning(disable : 4996) 

int n, m;
vector<pair<int, int>> p[100001];

bool dvisit[100001];


bool solve(int start, int end, int limit)
{
	if (dvisit[start])
		return false;
	dvisit[start] = true;
	if (start == end)
		return true;
	for (auto i : p[start])
	{
		int next = i.first;
		int cost = i.second;
		if (cost >= limit)
		{
			if (solve(next, end, limit))
				return true;
		}
	}
	return false;
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		p[a].push_back({ b,c });
		p[b].push_back({ a,c });
	}
	int s, e;
	scanf("%d %d", &s, &e);

	int l = 1, r = 1000000000;
	int ans = 0;
	while (l <= r)
	{
		int mid = l + (r - l) / 2;
		memset(dvisit, false, sizeof(dvisit));
		if (solve(s, e, mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}

	printf("%d\n", ans);

	return 0;
}