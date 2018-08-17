#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class info {
public:
	int age;
	string name;
	int no;
};

bool comp(info person1, info person2)
{
	if (person1.age < person2.age)
		return true;
	else if (person1.age == person2.age)
	{
		if (person1.no < person2.no)
			return true;
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
		person[i].no = i;
		cin >> person[i].age >> person[i].name;
	}
	sort(person, person + input, comp);

	for (int i = 0; i < input; i++)
		cout << person[i].age << " " << person[i].name << '\n';


	return 0;
}