#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
#pragma warning(disable : 4996) 


void solve(int n, int a, int b)
{
	if (n == 0)
		return;
	int c = 6 - a - b;
	solve(n - 1, a, c);
	printf("%d %d\n", a, b);
	solve(n - 1, c, b);
}


int main()
{
	int n;
	scanf("%d", &n);
	int ans = pow(2, n) - 1;
	printf("%d\n",ans);
	solve(n, 1, 3);

	return 0;
}