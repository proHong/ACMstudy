#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#pragma warning(disable : 4996) 
using namespace std;


int main()
{


	vector<int> v;
	for (int i = 0; i <3; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	printf("%d\n", v[1]);


	return 0;
}