#include <iostream>
#include <string>

using namespace std;

int main() {

	char x;
	char y;

	x = toupper('x');
	y = tolower('Y');

	cout << "Upper Case: " << x << endl;
	cout << "Lower Case: " << y << endl;

	cout << "Upper Case: " << isupper('x') << endl;

	cout << "isdigit: " << isdigit('x') << endl;
	cout << "is punct: " << ispunct('x') << endl;




}