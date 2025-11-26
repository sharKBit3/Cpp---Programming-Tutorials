#include <iostream>
#include <cmath>
#include <string>
using namespace std;

 /*  //procdure
void otherFuntion() {

}
        */

//function ;
int myFunction(int x, int y) {

	return x * y;
}

int myFunction2(int num1, int num2) {

	return num1 + num2;
}

int main() {

	cout << "the first one   " << myFunction(10, 20) << endl;;
	cout << "the second one  " << myFunction(10, 6) << endl;;
	cout << "the tird one    " << myFunction(10, 8) << endl;;
	cout << "the forth one   " << myFunction(10, 5) << endl;;

	int num1, num2;

	cin >> num1;
	cin >> num2;

	cout << myFunction2(num1, num2) << endl;



}