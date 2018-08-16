#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;
	int * arr = new int[input];
	int max = -1000000, min = 1000000;

	for (int i = 0; i < input; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << " " << max << endl;
	return 0;
}