#include <iostream>
#include <string>
#include <sstream>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	int sum = 0;
	string str = "";
	string s;
	while (getline(cin, s))
		str += s;

	istringstream sin(str);

	while (getline(sin, s, ','))
		sum += stoi(s);

	printf("%d\n", sum);


	return 0;
}