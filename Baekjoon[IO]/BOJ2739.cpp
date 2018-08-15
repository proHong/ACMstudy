#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;
	if (input > 100000)
		return 0;
	for (int i = 1; i < 10; i++)
		cout << input << " * " << i << " = " << input * i << "\n";

	return 0;
}