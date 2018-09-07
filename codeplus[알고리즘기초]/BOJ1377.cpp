#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#pragma warning(disable : 4996) 
using namespace std;

vector<pair<int, int>> v;

int main()
{
	int n, k = 0;
	scanf("%d", &n);
	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i].first);
		v[i].second = i;
	}
	sort(v.begin(),v.end());

	for (int i = 0; i < n; i++) {
		k = k > (v[i].second - i) ? k : (v[i].second - i);
	}
	printf("%d\n", k+1);


	return 0;
}