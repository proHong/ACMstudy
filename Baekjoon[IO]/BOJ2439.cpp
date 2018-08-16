#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = input-i; j > 1; j--)
			cout << ' ';
		for (int j = 0; j <= i; j++)
			cout << '*';
		cout << "\n";
	}

	return 0;
}