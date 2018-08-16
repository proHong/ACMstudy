#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << '*';
		for (int j = 2*(input - 1-i); j > 0; j--)
			cout << ' ';
		for (int j = 0; j <= i; j++)
			cout << '*';
		cout << "\n";
	}
	for (int i = input-2; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
			cout << '*';
		for (int j = 2 * (input - 1 - i); j > 0; j--)
			cout << ' ';
		for (int j = 0; j <= i; j++)
			cout << '*';
		cout << "\n";
	}


	return 0;
}