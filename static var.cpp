#include <iostream>
using namespace std;

void myfun() {

	static int a = 10;
	a++;
	cout << a << endl;


}


int main() {

	myfun();
	myfun();
	myfun();

	return 0;

}