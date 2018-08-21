#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int count[26] = { 0 };
	
	string S;
	cin >> S;
	for (int i = 0; i < S.length(); i++)
	{
		count[S[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
		cout << count[i] << ' ';

	return 0;
}