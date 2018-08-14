#include <iostream>
#include <string>
using namespace std;

int main() {

	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		int output = input[i] - 64;
		cout << output << ' ';
	}
	return 0;
}