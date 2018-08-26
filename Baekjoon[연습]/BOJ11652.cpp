#include <iostream>
#include <algorithm>
using namespace std;

long long num[1000001];

int main()
{
	int input = 0;
	cin >> input;

	for (int i = 0; i < input; i++)
		cin >> num[i];

	sort(num, num + input);

	long long number = num[0];
	long long cnt1 = 1, cnt2 = 1;

	for (int i = 1; i < input; i++)
	{
		if (num[i - 1] == num[i])
			cnt1++;
		else
			cnt1 = 1;
		if (cnt1 > cnt2)
		{
			cnt2 = cnt1;
			number = num[i];
		}
	}
	cout << number << endl;
	return 0;
}