#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int input = 0;
	cin >> input;

	int num[10001] = {0};

	for (int i = 0; i < input; i++)
	{
		int temp;
		cin >> temp;
		num[temp]++;
	}
	for (int i = 0; i < 10001; i++)
	{
		for (int j = 0; j < num[i]; j++)
			cout << i << '\n';
	}
	return 0;
}