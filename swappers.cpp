#include <iostream>
#include <cmath>

using namespace std;

void swapping() {

	int a, b, temp;

	cout << "************* numbers before swapping ***************";

	cout << "enter your first number : ";
	cin >> a;

	cout << "enter your second number : ";
	cin >> b;

	cout << "************after swwapping***********" << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "first number after swapping " << a;
	cout << "last number after swapping " << b;


}


int main() {
	swapping();
}
