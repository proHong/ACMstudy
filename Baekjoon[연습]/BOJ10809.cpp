#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int p[26] = { -1 };
	fill_n(p, 26, -1);
	string S;
	cin >> S;
	for (int i = 0; i < S.length(); i++)
	{
		if (p[S[i] - 97] == -1)
			p[S[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
		cout << p[i] << ' ';

	return 0;
}