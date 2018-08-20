#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int input = 0;
	int num = 0;
	cin >> input >> num;

	int * arr = new int[input];

	for (int i = 0; i < input; i++)
		cin >> arr[i];

	sort(arr, arr + input);


	cout << arr[num - 1] << endl;

	return 0;
}