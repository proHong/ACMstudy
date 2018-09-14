#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int n, m, k;


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string input;
	cin >> input;
	int ans = -1;
	/*
	do
	{
		int temp = stoi(input);
		if (temp % 30 == 0)
			ans = max(ans, temp);

	} while (next_permutation(input.begin(), input.end()));
	*/
	bool zero = false;
	int sum = 0;
	for (auto i : input)
	{
		int temp = i - '0';
		if (temp == 0)
			zero = true;
		sum += temp;
	}
	if (sum % 3 != 0 || !zero)
		ans = -1;
	else
	{
		sort(input.begin(),input.end(), greater<int>());
		ans = stoi(input);
	}

	cout << ans << '\n';
	return 0;
}