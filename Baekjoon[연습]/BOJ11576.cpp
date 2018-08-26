#include <iostream>
#include <vector>
#include <string>
using namespace std;


long long toten(int N[], int A, int m)		 //A->10
{
	long long result = 0;
	for (int i = 0; i < m; i++)
	{
		long long n = 1;
		for (int j = i; j < m - 1; j++)
			N[i] = N[i] * A;
		result = result + N[i];
	}

	return result;
}

vector<int> forten(long long N, int B)//10->B
{
	vector<int> v;

	while (N >= B)
	{
		v.push_back(N%B);
		N = N / B;
	}
	v.push_back(N);

	return v;
}

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
	for (int i = 0; i < m; i++)
		cin >> arr[i];

	vector<int> v = forten(toten(arr, A, m), B);

	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i] << ' ';
	}
	return 0;
}