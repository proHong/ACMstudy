#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string N;
	int A;
	int B;
	cin >> A >> B;
	int m;
	cin >> m;
	int arr[25];
	long long sum = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		sum += arr[i] * pow(A, m - 1 - i);
	}
	vector<int> v;
	while (sum >= B)
	{
		v.push_back(sum % B);
		sum = sum / B;
	}
	v.push_back(sum % B);
	for (int i = v.size()-1; i >= 0; i--)
	{
		cout << v[i] << ' ';
	}

	return 0;
}