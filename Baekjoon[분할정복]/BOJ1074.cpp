#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
#pragma warning(disable : 4996) 
int r, c;
long long solve(int x, int y, int n, long long ans)
{
	if (n == 1)
	{
		if (x == r && y == c)
			return ans;
		else if (y == c)
			return ans + 2;
		else if (x == r)
			return ans + 1;
		else
			return ans + 3;

	}
	int t = pow(2, n - 1);
	if (r < x + t&&c < y + t)
		return solve(x, y, n - 1, ans);
	else if (r < x + t)
		return solve(x, y + t, n - 1, ans + t*t);
	else if (c < y + t)
		return solve(x + t, y, n - 1, ans + 2 * t*t);
	else
		return solve(x + t, y + t, n - 1, ans + 3 * t*t);


}


int main()
{
	int n;
	scanf("%d %d %d", &n, &r, &c);

	long long ans = solve(0, 0, n, (long long)0);

	printf("%lld\n",ans);
	return 0;
}