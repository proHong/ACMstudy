#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);

	vector<int> v(n, 0);

	for (int i = 0; i < m; i++)
	{
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a - 1; j < b; j++)
			v[j] = c;
	}
	
	for(int i : v)
		printf("%d ", i );

	return 0;
}