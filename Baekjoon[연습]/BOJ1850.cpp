#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	long long int input1, input2;
	cin >> input1 >> input2;


	long long int temp1 = input1, temp2 = input2;
	while (temp2 != 0)
	{
		long long int temp = temp2;
		temp2 = temp1 % temp2;
		temp1 = temp;
	}
	long long int GCD = temp1;

	string str;
	str.assign(GCD, '1');
	cout << str << '\n';

	return 0;
}