#include <iostream>
#include <string>
using namespace std;

int main() {

	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (i % 10 == 0 && i != 0)
			cout << endl;
		cout << input[i];
	}

	return 0;
}