#include <iostream>
#include <string>
using namespace std;

int main() {

	int len;
	cin >> len;
	string input;
	cin >> input;
	int result = 0;
	for (int i = 0; i < len; i++)
	{
		int temp = input[i] - '0';
		result += temp;
	}
	cout << result << endl;

	return 0;
}