//ProgrammingAdivces.com
//Mohammed Abu-Hadhoud
#include<iostream>

using namespace std;

class clsA
{

public:
	int x;

	void Print()
	{
		cout << "The value of x=" << x << endl;
	}

};


//object sent by value, any updated will not b reflected
// on the original object
void Fun1(clsA W1)
{

	W1.x = 100;
}


//object sent by reference, any updated will be reflected
// on the original object
void Fun2(clsA& W1)
{

	W1.x = 200;
}


int main()

{
	clsA W1;

	W1.x = 50;
	cout << "\nA.x before calling function1: \n";
	W1.Print();


	//Pass by value, object will not be afected.
	Fun1(W1);
	cout << "\nA.x after calling function1 byval: \n";
	W1.Print();

	//Pass by value, object will be afected.
	Fun2(W1);
	cout << "\nA.x after calling function2 byref: \n";
	W1.Print();


	system("pause>0");

}
