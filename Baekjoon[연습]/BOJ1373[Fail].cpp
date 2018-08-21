#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long int N;
	cin >> N;
	long long temp = 0, c = 1;
	while(N>=1000)
	{
		int a = N % 1000;
		int b = 0, mul = 1;
		while (a>=10)
		{
			b = b + (a % 10)*mul;
			mul = mul * 2;
			a = a / 10;
		}
		b = b + (a % 10)*mul;
		temp = temp + b * c;
		N = N / 1000;
		c = c * 10;
	}
	int a = N % 1000;
	int b = 0, mul = 1;
	while (a >= 10)
	{
		b = b + (a % 10)*mul;
		mul = mul * 2;
		a = a / 10;
	}
	b = b + (a % 10)*mul;
	temp = temp + b * c;
	cout << temp << '\n';

	return 0;
}