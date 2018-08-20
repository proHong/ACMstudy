#include <iostream>
#include <algorithm>
using namespace std;





int main()
{
	int input = 0;
	cin >> input;

	long long * num = new long long[input];

	for (int i = 0; i < input; i++)
		cin >> num[i];
	
	sort(num, num + input);

	long long number = num[0];
	int a = 0, b = 0;

	for (int i = 0; i < input; i++)
	{
		if (number == num[i])
			a++;
		else
		{
			if (a > b)
			{
				number = num[i - 1];
				b = a;
				a = 1;
			}
			else
				a = 1;
		}
	}
	cout << number << endl;
	return 0;
}