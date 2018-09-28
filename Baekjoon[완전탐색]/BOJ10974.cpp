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
	for (int i = 1; i <= m; i++)
	{
		v.push_back(i);
	}
	do {
		for (auto i : v)
		{
			printf("%d ", i);
		}
		printf("\n");
	} while (next_permutation(v.begin(), v.end()));


	return 0;
}