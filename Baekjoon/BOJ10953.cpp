#include <iostream>
#include <string>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int a = 0, b = 0;
		char input;
		cin >> a >> input >> b;

		cout << a + b << endl;
	}

	return 0;
}