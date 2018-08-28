#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		v[i] = num;
	}
	sort(v.begin(), v.end());

	for (int i : v)
		printf("%d\n", i);

	return 0;
}