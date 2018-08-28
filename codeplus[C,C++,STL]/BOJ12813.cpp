#include <string>
#include <iostream>
#include <bitset>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	cin >> a >> b;

	bitset<100000> A(a), B(b);

	cout << (A&B) << '\n';
	cout << (A|B) << '\n';
	cout << (A^B) << '\n';
	cout << ~(A) << '\n';
	cout << ~(B) << '\n';


	return 0;
}