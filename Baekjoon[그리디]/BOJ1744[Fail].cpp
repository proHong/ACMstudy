#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int N;
vector<int> pv;
vector<int> mv;

int main()
{

	scanf("%d", &N);
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		int input;
		scanf("%d", &input);
		if (input == 1)
			ans++;
		else if (input > 0)
			pv.push_back(input);
		else
			mv.push_back(input);
	}
	sort(pv.begin(), pv.end(), greater<int>());
	sort(mv.begin(), mv.begin());
	for (int i = 0; i < pv.size(); i++)
	{

		if (i + 1 >=pv.size())
			ans += pv[i];
		else 
		{
			ans += pv[i] * pv[i + 1];
			i++;
		}
	}
	for (int i = 0; i < mv.size(); i++)
	{

		if (i + 1 >= mv.size())
			ans += mv[i];
		else
		{
			ans += mv[i] * mv[i + 1];
			i++;
		}
	}


	printf("%d\n", ans);



	return 0;
}