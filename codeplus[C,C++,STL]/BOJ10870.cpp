#include <cstdio>
#include <functional>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	function<int(int)> f = [&](int n) {if (n == 0) return 0; else if (n == 1) return 1; return f(n - 1) + f(n - 2); };
	int n;
	scanf("%d", &n);
	int result = f(n);
	printf("%d", result);

	return 0;
}