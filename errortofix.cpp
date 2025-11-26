#include <iostream>
#include <string>

using namespace std;


struct Info {

	string Firstname;
	string Lastname;
	short Age;
	string Phone;

};

void ReadOnly(Info& person, int x[3]) {

	cout << "enter your firstname: ";
	cin >> person.Firstname;

	cout << "enter your lastname: ";
	cin >> person.Lastname;
	
	cout << "enter your age: ";
	cin >> person.Age;

	cout << "enter your phone number: ";
	cin >> person.Phone;



}

void PrintOnly(Info& person, int x[3]) {

	cout << "your first name is: " << person.Firstname  << endl;
	cout << "your last name is: " << person.Lastname << endl;
	cout << "your age is: " << person.Age << endl;
	cout << "your phone number is: " << person.Phone << endl;

}

int main() {
	int x[3];

	Info person1;

	ReadOnly(person1, x);
	PrintOnly(person1, x);

	return 0;



}