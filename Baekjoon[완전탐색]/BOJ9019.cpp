#include <string.h>
#include <string>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool c[10001];
string how[10001];
queue<int> q;

void bfs(int n, int m)
{
	q.push(n);
	how[n] = "";
	c[n] = true;
	while (!q.empty() && c[m] == false)
	{
		int temp = q.front();
		q.pop();
		int D = (temp * 2) % 10000;
		if (!c[D])
		{
			q.push(D);
			c[D] = true;
			how[D] = how[temp] + "D";
		}
		int S = (temp - 1 >= 0) ? (temp - 1) : 9999;
		if (!c[S])
		{
			q.push(S);
			c[S] = true;
			how[S] = how[temp] + "S";
		}
		int L = (temp % 1000) * 10 + temp / 1000;
		if (!c[L])
		{
			q.push(L);
			c[L] = true;
			how[L] = how[temp] + "L";
		}
		int R = (temp % 10) * 1000 + temp / 10;
		if (!c[R])
		{
			q.push(R);
			c[R] = true;
			how[R] = how[temp] + "R";
		}
		
	}

}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;

		memset(c, false, sizeof(c));
		bfs(n, m);
		cout << how[m] << '\n';
		while (!q.empty())
		{
			q.pop();
		}
	}


	return 0;
}