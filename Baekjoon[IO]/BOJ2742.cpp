#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;
	if (input > 100000)
		return 0;
	for (int i = input; i > 0; i--)
		cout << i << "\n";

	return 0;
}