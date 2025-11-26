#include <iostream>
#include <vector>

using namespace std;

struct Employee{
	string _Firstname;
	string _Lastname;
	string _Salary;
};

int main() {

	//vector <structure name> reference!
	vector <Employee> Info;

	//structure ref!
	Employee person1;
	//ref.whatever inside the structure!
	person1._Firstname = "Abdullah";
	person1._Lastname = "Ashtar";
	person1._Salary = "3000$";
	Info.push_back(person1);


	Employee person2;

	person2._Firstname = "Name";
	person2._Lastname = "Surname";
	person2._Salary = "2000$";
	Info.push_back(person2);


	Employee person3;

	person3._Firstname = "Name";
	person3._Lastname = "Surname";
	person3._Salary = "2000$";
	Info.push_back(person3);


	for (Employee & Output : Info ) {

		cout << Output._Firstname << endl;
		cout << Output._Lastname << endl;
		cout << Output._Salary << endl;

	}
        return 0;

}