#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int* num1, int* num2)
{
	if (num1[1] < num2[1])
		return true;
	else if (num1[1] == num2[1])
	{
		if (num1[0] < num2[0])
			return true;
		else
			return false;
	}
	else
		return false;
}

int main()
{
	int input = 0;
	cin >> input;

	int ** xy = new int*[input];
	for (int i = 0; i < input; i++)
		xy[i] = new int[2];

	for (int i = 0; i < input; i++)
		cin >> xy[i][0] >> xy[i][1];

	sort(xy, xy + input, comp);

	for (int i = 0; i < input; i++)
		cout << xy[i][0] << " " << xy[i][1] << '\n';


	return 0;
}