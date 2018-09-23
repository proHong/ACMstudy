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
	if (pv.size() % 2 == 1)
		pv.push_back(1);
	if (mv.size() % 2 == 1)
		mv.push_back(1);
	sort(pv.begin(), pv.end(), greater<int>());
	sort(mv.begin(), mv.end());
	for (int i = 0; i < pv.size(); i+=2)
		ans += pv[i] * pv[i + 1];
	for (int i = 0; i < mv.size(); i+=2)
		ans += mv[i] * mv[i + 1];


	printf("%d\n", ans);



	return 0;
}