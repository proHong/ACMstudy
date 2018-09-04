#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int n;

pair<char, char> v[26];

void preorder(char c)
{
	if (c == '.')
		return;
	printf("%c", c);
	preorder(v[c - 'A'].first);
	preorder(v[c - 'A'].second);
}
void inorder(char c) 
{
	if (c == '.')
		return;
	inorder(v[c - 'A'].first);
	printf("%c", c);
	inorder(v[c - 'A'].second);

}
void postorder(char c) 
{
	if (c == '.')
		return;
	postorder(v[c - 'A'].first);
	postorder(v[c - 'A'].second);
	printf("%c", c);
}

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char p, l, r;
		scanf(" %c %c %c", &p, &l, &r);
		v[p - 'A'] = { l, r };
	}
	preorder('A');
	printf("\n");
	inorder('A');
	printf("\n");
	postorder('A');

	return 0;
}