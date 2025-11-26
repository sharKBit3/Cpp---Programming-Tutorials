#include <iostream>
#include <vector>

using namespace std;

struct Employee {

	string _Firstname;
	string _Lastname;
	string _Salary;

};


void readOnly(vector <Employee>& info) {

	
	Employee person1;
	
	char yes;
	do {
		cout << "enter his Firstname: ";
		cin >> person1._Firstname;
		cout << "enter his Lastname: ";
		cin >> person1._Lastname;
		cout << "enter his Salary: ";
		cin >> person1._Salary;
		info.push_back(person1);

		cout << "Would you like to add more Employee to your Company?(Y / N)";
		cin >> yes;

	} while (yes == 'Y' || yes == 'y');
		

	
	

};

void Print(vector <Employee> &info) {
	
	
	for (Employee& Output : info) {
		
		cout << "\n" << Output._Firstname;
		cout << "\n" << Output._Lastname;
		cout << "\n" << Output._Salary;


	}


}


int main() {

	vector <Employee> info;

	readOnly(info);     
	Print(info);

	

	





}