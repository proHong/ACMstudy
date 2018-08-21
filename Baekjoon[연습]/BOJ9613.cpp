#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int line;
	cin >> line;

	for (int i = 0; i < line; i++)
	{
		int num;
		cin >> num;
		long long * arr = new long long[num];
		for (int j = 0; j < num; j++)
			cin >> arr[j];
		long long sum = 0;
		for (int j = 0; j < num; j++)
		{
			for (int k = j+1; k < num; k++)
			{
				long long temp1 = arr[j], temp2 = arr[k];
				while (temp2 != 0)
				{
					long long temp = temp2;
					temp2 = temp1 % temp2;
					temp1 = temp;
				}
				sum = sum + temp1;
			}
		}

		cout << sum << '\n';
	}
	return 0;
}