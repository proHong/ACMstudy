#include <iostream>
#include <algorithm>
using namespace std;

int max = 0;
int d[1000001];

int dp(int input);


int main() {

	int input;
	cin >> input;
	int output = dp(input);
	cout << output << endl;
	return 0;
}

int dp(int input)
{
	d[1] = 0;
	d[2] = 1;
	d[3] = 1;
	for (int i = 2; i <= input; i++)
	{
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0)
			d[i] = min(d[i], d[i / 2] + 1);
		if (i % 3 == 0)
			d[i] = min(d[i], d[i / 3] + 1);
	}
	return d[input];
}

