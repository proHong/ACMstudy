#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#pragma warning(disable : 4996) 
using namespace std;

bool cmp(string a, string b)
{
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
}


int main()
{

	int n;
	scanf("%d", &n);
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		char str[51];
		scanf("%s", &str);
		v.push_back(str);
	}
	sort(v.begin(), v.end(), cmp);

	auto last = unique(v.begin(), v.end());
	v.erase(last, v.end());

	for (string i : v)
		printf("%s\n", i.c_str());

	return 0;
}