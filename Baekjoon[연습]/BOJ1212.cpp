#include <iostream>
#include <vector>
#include <string>
using namespace std;

string trans(string a) {
	string result;
	if (a == "0")
		return "000";
	else if(a == "1")
		return "001";
	else if (a == "2")
		return "010";
	else if (a == "3")
		return "011";
	else if (a == "4")
		return "100";
	else if (a == "5")
		return "101";
	else if (a == "6")
		return "110";
	else if (a == "7")
		return "111";
	else return "0";
}
string ftrans(string a) {
	string result;
	if (a == "0")
		return "0";
	else if (a == "1")
		return "1";
	else if (a == "2")
		return "10";
	else if (a == "3")
		return "11";
	else if (a == "4")
		return "100";
	else if (a == "5")
		return "101";
	else if (a == "6")
		return "110";
	else if (a == "7")
		return "111";
	else return "";
}
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string N;
	cin >> N;

	string st = "";
	st += ftrans(N.substr(0, 1));
	for (int i = 1; i <N.size(); i++)
		st += trans(N.substr(i, 1));
	
	cout << st << '\n';

	return 0;
}