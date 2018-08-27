#include <cstdio>
#include <map>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	map<int,int> m;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		m[num]++;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		printf("%d ", m[num]);
	}



	return 0;
}