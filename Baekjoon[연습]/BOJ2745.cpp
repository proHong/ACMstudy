#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string N;
	int B;
	cin >> N >> B;
	long long result = 0;
	for (int i = 0; i < N.length(); i++)
	{
		int n;
		if (N[i] >= 'A' && N[i] <= 'Z')
			n = (int)N[i] - 55;
		else
			n = (int)N[i] - 48;
		for (int j = i; j < N.length() - 1; j++)
			n = n * B;
		result = result + n;
	}
	cout << result << '\n';

	return 0;
}