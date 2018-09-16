#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int e, s, m;
int em = 15, sm = 28, mm = 19;

int find()
{
	int ans;
	while (true)
	{
		if (e == s && s == m)
		{
			ans = e;
			break;
		}
		if (s >= e && m >= e)
		{
			e += em;
			continue;
		}
		if (s >= m && e >= m)
		{
			m += mm;
			continue;
		}
		if (e >= s && m >= s)
		{
			s += sm;
			continue;
		}
	}

	return ans;
}

int main()
{

	scanf("%d %d %d", &e, &s, &m);
	
	int ans = find();


	printf("%d\n", ans);



	return 0;
}