#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int input = 0;
	cin >> input;

	int * num = new int[input];

	for (int i = 0; i < input; i++)
		cin >> num[i];
	sort(num, num + input);
	for (int i = 0; i < input; i++)
		cout << num[i] << '\n';
	

	return 0;
}