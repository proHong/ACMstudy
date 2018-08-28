#include <string>
#include <queue>
#include <cstdio>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	priority_queue<int> pq;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		if (num == 0)
		{
			if (pq.empty())
				printf("0\n");
			else
			{
				printf("%d\n", -pq.top());
				pq.pop();
			}
		}
		else
			pq.push(-num);
	}

	return 0;
}