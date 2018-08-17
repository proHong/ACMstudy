#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class info {
public:
	string name;
	int jumsu[3];
};

bool comp(info person1, info person2)
{
	if (person1.jumsu[0] > person2.jumsu[0])
		return true;
	else if (person1.jumsu[0] == person2.jumsu[0])
	{
		if (person1.jumsu[1] < person2.jumsu[1])
			return true;
		else if (person1.jumsu[1] == person2.jumsu[1])
		{
			if (person1.jumsu[2] > person2.jumsu[2])
				return true;
			else if (person1.jumsu[2] == person2.jumsu[2])
			{
				if (person1.name < person2.name)
					return true;
				else 
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

int main()
{
	int input = 0;
	cin >> input;

	info * person = new info[input];

	for (int i = 0; i < input; i++)
	{
		cin >> person[i].name >> person[i].jumsu[0] >> person[i].jumsu[1] >> person[i].jumsu[2];
	}
	sort(person, person + input, comp);

	for (int i = 0; i < input; i++)
		cout << person[i].name << '\n';


	return 0;
}