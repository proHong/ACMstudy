#include <iostream>
#include <string>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	int sum = 0;
	string str;
	while (getline(cin, str, ','))
		sum += stoi(str);

	printf("%d\n", sum);


	return 0;
}