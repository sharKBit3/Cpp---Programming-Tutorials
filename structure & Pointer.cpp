#include <iostream>
#include <string>

using namespace std;

struct Info{
	string _Firstname;
	string Salary;
};

int main() {

	Info Emoloyee1, * ptr, *ptr2;

	Emoloyee1._Firstname = "Abdullah";
	Emoloyee1.Salary = "5000";

	cout << Emoloyee1._Firstname << endl;
	cout << Emoloyee1.Salary << endl;
	ptr = &Emoloyee1;


	cout << ptr->_Firstname << endl;
	cout << ptr->Salary << endl;

	ptr2 = &Emoloyee1;
	cout << ptr2->Salary << flush;



}

