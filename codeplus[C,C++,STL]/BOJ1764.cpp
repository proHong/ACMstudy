#include <string>
#include <map>
#include <set>
#include <cstdio>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{


	map<string, int> s;
	set<string> r;
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		char str[20];
		scanf("%20s", &str);
		string temp(str);
		s[temp]++;
	}
	for (int i = 0; i < m; i++)
	{
		char str[20];
		scanf("%20s", &str);
		string temp(str);
		s[temp]++;
	}
	int count = 0;
	for (auto i = s.begin(); i != s.end(); ++i)
	{
		if ( i->second == 2)
		{
			count++;
			r.insert(i->first);
		}
	}
	printf("%d\n", count);
	for (auto i = r.begin(); i != r.end(); ++i)
	{
		printf("%s\n", (*i).c_str());
	}


	return 0;
}