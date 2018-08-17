#include <iostream>
using namespace std;

int max = 0;
int dp(int input, int output);
int div3(int input, int output);
int div2(int input, int output);
int notdiv(int input, int output);

int main() {

	int input;
	cin >> input;
	int output = dp(input, 0);
	cout << output << endl;
	return 0;
}


int div3(int input, int output)
{
	if (input == 1)
		return output;

	input = input / 3;
	output++;
	return dp(input, output);
}
int div2(int input, int output)
{
	if (input == 1)
		return output;

	input = input / 2;
	output++;
	return dp(input, output);
}
int notdiv(int input, int output)
{
	if (input == 1)
		return output;

	input--;
	output++;
	return dp(input, output);
}
int dp(int input, int output)
{
	if (input == 1)
		return output;
	int a = 1000000,b = 1000000,c = 10000000;
	if (input % 3 == 0)
		a = div3(input, output);
	if (input % 2 == 0)
		b = div2(input, output);
	c = notdiv(input, output);
	if (a <= b && a <= c)
		return a;
	else if (b <= a && b <= c)
		return b;
	else
		return c;
}

