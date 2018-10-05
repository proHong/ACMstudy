#include <string.h>
#include <string>
#include <queue>
#include <stdio.h>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;
#define MAX 200000
bool prime[10001];
bool c[10001];
int d[10001];
queue<int> q;

int change(int num, int index, int digit) 
{
	if (index == 0 && digit == 0) return -1;
	string s = to_string(num);
	s[index] = digit + '0';
	return stoi(s);
}

void bfs(int n, int m)
{
	q.push(n);
	d[n] = 0;
	c[n] = true;
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		for (int i = 0; i<4; i++) 
		{
			for (int j = 0; j <= 9; j++) 
			{
				int next = change(temp, i, j);
				if (next != -1) 
				{
					if (prime[next] && c[next] == false) 
					{
						q.push(next);
						d[next] = d[temp] + 1;
						c[next] = true;
					}
				}
			}
		}
	}

}

int main()
{
	for (int i = 2; i <= 10000; i++) {
		if (prime[i] == false) {
			for (int j = i * i; j <= 10000; j += i) {
				prime[j] = true;
			}
		}
	}
	for (int i = 0; i <= 10000; i++) {
		prime[i] = !prime[i];
	}

	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		memset(c, false, sizeof(c));
		memset(d, 0, sizeof(d));
		bfs(n,m);

		printf("%d\n", d[m]);
	}


	return 0;
}