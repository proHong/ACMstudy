#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;

	for (int i = 0; i < input-1; i++)
	{
		for (int j = input - 1; j > i; j--)
			cout << ' ';
		for (int j = 0; j < 2 * i + 1; j++)
			cout << '*';
		cout << "\n";
	}
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int j = 2 * input; j > 2 * i + 1; j--)
			cout << '*';
		cout << "\n";
	}


	return 0;
}