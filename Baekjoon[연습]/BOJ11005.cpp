#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long N;
	int B;
	cin >> N >> B;
	
	vector<int> v;

	while (N>=B)
	{
		v.push_back(N%B);
		N = N / B;
	}
	v.push_back(N);
	string str = "";

	while (v.size() != 0)
	{
		if (v.back() < 10)
			str = str +  to_string(v.back());
		else
		{
			char tm = 'A' + v.back() - 10;
			str = str + tm;
		}
		v.pop_back();
	}
	std::cout << str << '\n';

	return 0;
}