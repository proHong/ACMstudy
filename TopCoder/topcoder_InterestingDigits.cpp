#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;


vector<int> ensrypt(int base)
{
	vector<int> ans;

	for (int i = 2; i < base; i++)
	{
		if (((base - 1) % i) == 0)
			ans.push_back(i);
	}


	return ans;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<int> numbers;
	int base;
	cout << "base = ";
	cin >> base;


	vector<int> result = ensrypt(base);


	cout << "Returns: {";
	for (int i = 0; i < result.size() - 1; i++)
	{
		cout << result[i] << ", ";
	}
	cout << result.back();

	cout << "}\n";
	return 0;
}