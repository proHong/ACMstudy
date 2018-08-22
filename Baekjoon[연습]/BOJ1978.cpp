#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (num == 2)
			count++;
		for (int j = 2; j < num; j++)
		{
			if (num%j == 0)
				break;
			if (j == num - 1)
				count++;
		}
	}
	cout << count << '\n';
	return 0;
}