#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<char> L, R;

	string S;
	cin >> S;
	for (int i = 0; i < S.length(); i++)
		L.push_back(S[i]);
	int line = 0;
	cin >> line;
	for (int i = 0; i < line; i++)
	{
		char temp;
		cin >> temp;
		if (temp == 'L')
		{
			if (L.size() == 0)
				continue;
			R.push_back(L.back());
			L.pop_back();
		}
		else if (temp == 'D')
		{
			if (R.size() == 0)
				continue;
			L.push_back(R.back());
			R.pop_back();
		}
		else if (temp == 'B')
		{
			if (L.size() == 0)
				continue;
			L.pop_back();
		}
		else if (temp == 'P')
		{
			char s;
			cin >> s;
			L.push_back(s);
		}
	}
	for (int i = 0; i < L.size(); i++)
		cout << L[i];
	for (int i = R.size() - 1; i >= 0; i--)
		cout << R[i];
	cout << '\n';


	return 0;
}