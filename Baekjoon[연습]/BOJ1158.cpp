#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << '<';
	while (q.size() != 0)
	{
		if (q.size() == 1)
		{
			cout << q.front();
			q.pop();
		}
		else
		{
			for (int i = 1; i < m; i++)
			{
				q.push(q.front());
				q.pop();
			}
			cout << q.front() << ", ";
			q.pop();
		}
		
	}
	cout << '>';

	return 0;
}