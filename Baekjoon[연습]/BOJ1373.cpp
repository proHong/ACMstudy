#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string N;
	cin >> N;
	if (N.size() % 3 == 2)
		N = '0' + N;
	else if (N.size() % 3 == 1)
		N = "00" + N;
	string st = "";
	for (int i = 0; i < N.size(); i = i + 3)
	{
		int num = 0;
		string s = N.substr(i, 1);
		num += atoi(s.c_str()) * 2 * 2;
		s = N.substr(i + 1, 1);
		num += atoi(s.c_str()) * 2;
		s = N.substr(i + 2, 1);
		num += atoi(s.c_str());
		st += to_string(num);
	}
	cout << st << '\n';

	return 0;
}