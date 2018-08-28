#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	vector<int> v;

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	int input;
	scanf("%d", &input);

	printf("%d\n", count(v.begin(),v.end(),input));

	return 0;
}