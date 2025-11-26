#include <iostream>
using namespace std;

int main() {

	int a = 10;
	cout << "The value of a is  : " << a << endl;
	cout << "The address of a is: " << &a << endl;

	int* p;
	p = &a;

	cout << "Pointer Value: " << p << endl;
	cout << "Pointer locked Box Value: " << *p << endl;

	*p = 20;

	cout << "a is now: " << a << endl; // 20
	cout << "pointer locked Box value is now: " << *p << endl; // 20

	a = 30;
	cout << "a is now: " << a << endl; // 30
	cout << "pointer locked Box value is now: " << *p << endl; // 30

	

	return 0;


}