#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	if (N == 0)
	{
		cout << 0 << '\n';
		return 0;
	}
	int n[32];
	fill_n(n, 32, -1);
	int k = 0;
	while(N!=1)
	{
		n[k] = abs(N%-2);
		if(N<0 && (N % -2)!=0)
			N = N / -2 + 1;
		else
			N = N / -2;
		k++;
	}
	n[k] = abs(N%-2);

	for (int i = 31; i >=0 ; i--)
	{
		if(n[i]!=-1)
			cout << n[i];
	}
	cout << '\n';

	return 0;
}