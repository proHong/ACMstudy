#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int M, N;
	cin >> M >> N;
	bool * number = new bool[N+1]();
	
	for (int i = 2; i <= N; i++)
	{
		if (number[i] == false)
		{
			if (i >= M)
				cout << i << '\n';
			for (int j = 2; i*j <= N; j++)
			{
				number[i*j] = true;
			}
		}
	}
	return 0;
}