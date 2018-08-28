#include <iostream>
#include <string>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	int count = 0;
	string str;
	while (getline(cin,str,','))
		count++;

	printf("%d\n", count);

	
	return 0;
}