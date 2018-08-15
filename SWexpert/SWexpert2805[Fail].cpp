#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int T = 0;

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int size = 0;
		cin >> size;
		int ** input= new int*[size];
		for (int j = 0; j < size; j++)
		{
			input[j] = new int[size];
			string line;
			cin >> line;
			for (int k = 0; k < size; k++)
			{
				input[j][k] = line[k] - '0';
			}
		}
		int result = 0;
		for (int j = 0; j < size; j++)
		{
			int a;
			if (j == size / 2)
				a = size / 2;
			else
				a = abs(j % (size / 2));
			for (int k = 0; k < size; k++)
			{
				int b = abs(k - (size / 2));
				if (b <= a)
					result += input[j][k];
			}
		}
		cout << "#" << i << " " << result << endl;
		
		for (int j = 0; j < size; j++)
		{
			delete [] input[j];
		}
		delete [] input;
	}

	return 0;
}