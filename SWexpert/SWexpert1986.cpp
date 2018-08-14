#include <iostream>
using namespace std;

int main()
{
	int T = 0;

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int input = 0;

		cin >> input;

		int result = 0;

		for (int j = 1; j <= input; j++)
		{
			if (j % 2 != 0)
				result += j;
			else
				result -= j;
		}
		cout << "#" << i << " " << result << endl;
	}


	return 0;
}