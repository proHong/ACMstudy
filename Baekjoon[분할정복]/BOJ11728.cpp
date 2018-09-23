#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
#pragma warning(disable : 4996) 

int a[1000000];
int b[1000000];
int c[2000000];

int n, m;

void merge()
{
	int i = 0, j = 0, k = 0;

	while (i < n && j < m) {
		if (a[i] <= b[j]) {
			c[k++] = a[i++];
		}
		else {
			c[k++] = b[j++];
		}
	}
	while (i < n) {
		c[k++] = a[i++];
	}
	while (j < m) {
		c[k++] = b[j++];
	}
}

int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);
	merge();
	for (int i = 0; i<n + m; i++) 
	{
		printf("%d ", c[i]);
	}

	return 0;
}