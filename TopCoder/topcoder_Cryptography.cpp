#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;


long long ensrypt(vector<int> numbers)
{
	int ans = 1;
	sort(numbers.begin(), numbers.end());
	numbers[0]++;
	for (int i : numbers)
		ans *= i;
	
	return ans;
}

vector<int> strcut(string str)
{
	vector<int> v;
	int start = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ',')
		{
			string temp = str.substr(start, i - start);
			int num = stoi(temp);
			v.push_back(num);
			start = i + 2;
		}
		if (i == str.length() - 1)
		{
			string temp = str.substr(start, i - start + 1);
			int num = stoi(temp);
			v.push_back(num);
		}
	}
	return v;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<int> numbers;

	string input;
	cout << "numbers = ";
	getline(cin, input);
	input = input.substr(1, input.size() - 2);
	numbers = strcut(input);

	long long result = ensrypt(numbers);

	cout << "Returns: " << result << '\n';

	return 0;
}