#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	int count = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i % 125 == 0) count += 3;
		else if (i % 25 == 0) count += 2;
		else if (i % 5 == 0)count++;
	}
	cout << count << '\n';

	return 0;
}