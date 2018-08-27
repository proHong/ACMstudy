#include <cstdio>
#include <functional>
#include <set>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	set<int> s;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		s.insert(num);
	}
	for (auto i = s.begin(); i != s.end(); ++i)
		printf("%d ", *i);



	return 0;
}