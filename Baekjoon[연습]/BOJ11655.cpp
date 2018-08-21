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
	getline(cin, S);
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] >= 97 && S[i] <= 122)
		{
			if (S[i] + 13 >= 97 && S[i] + 13 <= 122)
				S[i] = S[i] + 13;
			else
				S[i] = S[i] + 13 - 123 + 97;
		}
		else if (S[i] >= 65 && S[i] <= 90)
		{
			if (S[i] + 13 >= 65 && S[i] + 13 <= 90)
				S[i] = S[i] + 13;
			else
				S[i] = S[i] + 13 - 91 + 65;
		}
	}
	cout << S;

	return 0;
}