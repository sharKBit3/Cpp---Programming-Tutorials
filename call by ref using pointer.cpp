#include <iostream>
using namespace std;


void funtion(int *A1, int *A2) {

	int temp;
	temp = *A1;
	*A1 = *A2;
	*A2 = temp;


}

int main() {

	int x = 10, y = 20;
	cout << "numbers before swapping: " << endl;
	cout << "First number:  " << x << endl;
	cout << "last number : " << y << endl;

	funtion(&x, &y);
	cout << "numbers after swapping: ";
	cout << "Firstnumber: " << x << endl;
	cout << "Last number: " << y << endl;



}