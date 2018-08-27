#include <cstdio>
#include <functional>
#include <vector>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	vector<function<int(int, int)>> v;
	v.push_back([](int a, int b) {return a + b; });
	v.push_back([](int a, int b) {return a - b; });
	v.push_back([](int a, int b) {return a * b; });
	v.push_back([](int a, int b) {return a / b; });
	v.push_back([](int a, int b) {return a % b; });
	
	
	int a, b;
	scanf("%d %d", &a, &b);
	for (auto &i : v)
	{
		printf("%d\n", i(a, b));
	}
	return 0;
}