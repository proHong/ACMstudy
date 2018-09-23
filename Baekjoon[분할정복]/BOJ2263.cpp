#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
#pragma warning(disable : 4996) 


int po[100001];
int io[100001];
int position[100001];

void solve(int is,int ie, int ps, int pe)
{
	if (ps > pe || is > ie)
		return;
	int root = po[pe];
	printf("%d ", root);

	int l = position[root] - is;
	solve(is, position[root] - 1, ps, ps + l - 1);
	solve(position[root] + 1, ie, ps + l, pe - 1);
	
}


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &io[i]);
		position[io[i]] = i;
	}
	for (int i = 0; i < n; i++)
		scanf("%d", &po[i]);
	solve(0, n - 1, 0, n - 1);

	return 0;
}