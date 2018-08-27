#include <cstdio>
#include <functional>
#include <list>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	list<pair<int,int>> l;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int num;
		scanf("%d", &num);
		l.push_back({ num, i });
	}
	for (auto i = l.begin();l.size() != 1;)
	{
		printf("%d ", i->second);
		int step = i->first;
		if (step > 0)
		{
			auto temp = i;
			++temp;
			if (temp == l.end())
				temp = l.begin();
			l.erase(i);
			i = temp;
			for (int j = 1; j < step; j++)
			{
				++i;
				if (i == l.end())
					i = l.begin();
			}
		}
		else if (step < 0)
		{
			step = -step;
			auto temp = i;
			++temp;
			if (temp == l.end())
				temp = l.begin();
			l.erase(i);
			i = temp;
			for (int j = 0; j < step; j++)
			{
				if (i == l.begin())
					i = l.end();
				--i;
			}

		}
	}
	printf("%d ", l.front().second);
	return 0;
}