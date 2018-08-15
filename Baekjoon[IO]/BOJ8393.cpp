#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;
	if (input > 10000)
		return 0;
	int result = 0;
	for (int i = 1; i <= input; i++)
		result += i;
	cout << result << endl;

	return 0;
}