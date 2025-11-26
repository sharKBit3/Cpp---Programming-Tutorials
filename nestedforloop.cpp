#include <iostream>
#include <string>

using namespace std;



//to print ***********
void nestedForLoop_EX1() {

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
}


// i*j mul table;


void nestedForLoop_EX2() {

	for (int i = 1; i <= 10; i++) {
		cout << "i = " << i << endl;

		for (int j = 1; j <= 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}

	cout << "-----------------------------" ;
}


void nestedForLoop_EX3()
{
	for (int i = 1; i <= 10; i++)
	{
	
		for (int j = 1; j <= i; j++)
		{
			cout << " * ";
		}

		cout << "\n";
	}
}


int main() {

	//nestedForLoop_EX1();
	//nestedForLoop_EX2();
    nestedForLoop_EX3();

}