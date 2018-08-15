#include <iostream>
using namespace std;

int main() {

	int mon, day;
	cin >> mon >> day;
	int result = 0;
	switch (mon)
	{
	case 1:
		result += day;
		break;
	case 2:
		result += 31;
		result += day;
		break;
	case 3:
		result += 59;
		result += day;
		break;
	case 4:
		result += 90;
		result += day;
		break;
	case 5:
		result += 120;
		result += day;
		break;
	case 6:
		result += 151;
		result += day;
		break;
	case 7:
		result += 181;
		result += day;
		break;
	case 8:
		result += 212;
		result += day;
		break;
	case 9:
		result += 243;
		result += day;
		break;
	case 10:
		result += 273;
		result += day;
		break;
	case 11:
		result += 304;
		result += day;
		break;
	case 12:
		result += 334;
		result += day;
		break;
	}
	switch (result%7)
	{
	case 0:
		cout << "SUN" << endl;
		break;
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	}
	return 0;
}