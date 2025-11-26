#include <iostream>
using namespace std;


struct strInfo
{
	string firstName;
	string lastName;
	short age;
	string phoneNumber;
};

void readPersonInfo(strInfo& person, int number)
{

	cout << number + 1 << ". Person Info: " << endl;
	cout << "-----------------------" << endl;

	cout << "Enter first name: ";
	cin >> person.firstName;

	cout << "Enter last name: ";
	cin >> person.lastName;

	cout << "Enter age: ";
	cin >> person.age;

	cout << "Enter phone number: ";
	cin >> person.phoneNumber;

	cout << "-----------------------------" << endl;

}

void writePersonInfo(strInfo person, int number)
{

	cout << number + 1 << ". Person Info: " << endl;
	cout << "-----------------------" << endl;

	cout << "*******************************" << endl;
	cout << "First Name: " << person.firstName << endl;
	cout << "Last Name: " << person.lastName << endl;
	cout << "Age: " << person.age << endl;
	cout << "Phone Number: " << person.phoneNumber << endl;
	cout << "*******************************" << endl;

}

void readAllPersons(strInfo persons[100], int& length)
{

	cout << "How many persons you want to enter? ";
	cin >> length;

	for (int i = 0; i <= length - 1; i++)
	{
		readPersonInfo(persons[i], i);
	}
}

void writeAllPersons(strInfo persons[100], int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		writePersonInfo(persons[i], i);
	}
}


int main()
{
	strInfo persons[100];
	int length = 0;

	readAllPersons(persons, length);
	writeAllPersons(persons, length);

	return 0;
}