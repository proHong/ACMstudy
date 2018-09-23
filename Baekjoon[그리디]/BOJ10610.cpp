#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string input;
	cin >> input;

	int sum = 0;
	sort(input.begin(), input.end());
	for (auto i : input)
	{
		int temp = i - '0';
		sum += temp;
	}
	if (sum % 3 == 0 && input[0] == '0')
	{
		reverse(input.begin(), input.end());
		cout << input << '\n';
	}
	else
		cout << -1 << '\n';

	return 0;
}