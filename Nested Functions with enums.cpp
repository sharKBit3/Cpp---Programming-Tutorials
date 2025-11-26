#include <iostream>
#include <string>
using namespace std;

enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Sat = 7 };

void showweekDayMenu() {
	cout << "1- Sun" << endl;
	cout << "2- Mon"<< endl;
	cout << "3- Tue"<< endl;
	cout << "4- Wed"<< endl;
	cout << "5- Thu"<<"\n"<< flush;
	cout << "6- Fri"<< endl;
	cout << "7- Sat"<< endl;
	
};

int readWeakDay() {
	int wd;
	cin >> wd;
	return (enWeekDay) wd;
};

string GetWeekDayName(enWeekDay Weekday) {
	switch (Weekday) {

	case enWeekDay::Sun:
		return "Sunday";
	case enWeekDay::Mon:
		return "Monday";
	case enWeekDay::Tue:
		return "Sunday";
	case enWeekDay::Wed:
		return "Wed";
	case enWeekDay::Thur:
		return "Thursday";
	case enWeekDay::Fri:
		return "Friday";
	case enWeekDay::Sat:
		return "Saturday";
	default:
		cout << "enter is invalid";
		break;
	}
	return 0;
};


int main() {
	showweekDayMenu();
	cout << GetWeekDayName(enWeekDay()) << endl;

	return 0;
}

