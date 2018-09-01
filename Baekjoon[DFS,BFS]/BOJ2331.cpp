#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
#include <cmath>
#pragma warning(disable : 4996) 
using namespace std;

vector<pair<int,int>> D;

int dfs(int A, int P)
{
	for (auto i : D)
	{
		if (i.first == A)
			return i.second;
	}
	D.push_back({ A, D.size() });
	string s = to_string(A);
	int B = 0;
	for (int i = 0; i < s.length(); i++)
	{
		string temp = s.substr(i, 1);
		B += pow(stoi(temp), P);
	}
	return dfs(B, P);
}

int main()
{
	int A, P;
	scanf("%d %d", &A, &P);


	printf("%d\n", dfs(A,P));


	return 0;
}