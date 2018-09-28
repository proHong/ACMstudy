#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
#pragma warning(disable : 4996) 

vector<int> v;

int main()
{
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	bool ans = next_permutation(v.begin(), v.end());
	if (!ans)
	{
		printf("-1\n");
		return 0;
	}
	for (auto i : v)
	{
		printf("%d ", i);
	}
	printf("\n");


	return 0;
}