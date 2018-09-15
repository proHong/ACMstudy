#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int n;
vector<int> p;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int time;
		scanf("%d", &time);
		p.push_back(time);
	}
	sort(p.begin(), p.end());

	int ans = 0;
	int j = n;
	for (int i = 0; i < n ; i++)
	{
		ans += p[i] * j;
		j--;
	}

	printf("%d\n", ans);

	return 0;
}