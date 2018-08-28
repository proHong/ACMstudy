#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#pragma warning(disable : 4996) 
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);
	vector<int> v;
	for (int i = 0; i <n; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	int result = 0;
	do
	{
		int temp = 0;
		for (int i = 0; i < n - 1; i++)
		{
			temp += abs(v[i] - v[i + 1]);
		}
		result = max(result, temp);

	} while (next_permutation(v.begin(), v.end()));

	printf("%d", result);

	return 0;
}