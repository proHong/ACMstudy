#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = input - 1; j > i; j--)
			cout << ' ';
		for (int j = 0; j < 2 * i + 1; j++)
		{
			if (j == 0 || j == 2 * i)
				cout << '*';
			else if (i == input - 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << "\n";
	}
	return 0;
}