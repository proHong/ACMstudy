#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++)
	{
		int input;
		cin >> input;

		int * tcase = new int[input];
		for (int j = 0; j < input; j++)
			cin >> tcase[j];
		int result = 0;
		for (int j = 2; j < input - 2; j++)
		{
			int max = 0;
			for (int k = j - 2; k < j + 3; k++)
			{
				if (k == j)
					continue;
				if (max < tcase[k])
					max = tcase[k];
			}
			if (tcase[j] - max > 0)
			{
				result += tcase[j] - max;
				j += 2;
			}
		}
		cout << "#" << i + 1 << " " << result << endl;
	}


	return 0;
}