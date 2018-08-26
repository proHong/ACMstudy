#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> thePouring(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId)
{
	for (int i = 0; i < fromId.size(); i++)
	{
		int sum = bottles[toId[i]] + bottles[fromId[i]];
		bottles[toId[i]] = min(sum, capacities[toId[i]]);
		bottles[fromId[i]] = sum - bottles[toId[i]];
	}

	return bottles;
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
			int num = atoi(temp.c_str());
			v.push_back(num);
			start = i + 2;
		}
		if (i == str.length() - 1)
		{
			string temp = str.substr(start, i - start + 1);
			int num = atoi(temp.c_str());
			v.push_back(num);
		}
	}
	return v;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> capacities;
	vector<int> bottles;
	vector<int> fromId;
	vector<int> toId;

	string input;
	cout << "capacities = ";
	getline(cin, input);
	input = input.substr(1, input.size() - 2);
	capacities = strcut(input);
	cout << "bottles = ";
	getline(cin, input);
	input = input.substr(1, input.size() - 2);
	bottles = strcut(input);
	cout << "fromId = ";
	getline(cin, input);
	input = input.substr(1, input.size() - 2);
	fromId = strcut(input);
	cout << "toId = ";
	getline(cin, input);
	input = input.substr(1, input.size() - 2);
	toId = strcut(input);

	bottles = thePouring(capacities, bottles, fromId, toId);
	cout << "Returns: {";
	for (int i = 0; i < bottles.size()-1; i++)
	{
		cout << bottles[i] << ", ";
	}
	cout << bottles[bottles.size() - 1] << "}\n";


	return 0;
}