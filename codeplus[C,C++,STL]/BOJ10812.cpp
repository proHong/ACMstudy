#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		v[i] = i + 1;

	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		rotate(v.begin() + a - 1, v.begin() + c - 1, v.begin() + b);
	}

	for (int i : v)
		printf("%d ", i);

	return 0;
}