#include <iostream>
using namespace std;


void DoubleToIntegerExample()
{

	int num1;
	int num2 = 18.99;

	num1 = num2; // implicit conversion from double to int
	 
	//num1 = (int)num2; // explicit conversion

	//num1 = int(num2); // another way of explicit conversion

	cout << num1 << endl;

}

int main()
{
	DoubleToIntegerExample();
	return 0;
}



///////////////////////////////////////////////

/*- `stoi`: string to integer
- `stof`: string to float
- `stod` : string to double

String to Integer, Double, and Float

*/
/*string ot integer double flaot*/


#include <iostream>
#include <string>
using namespace std;

void StringToIntDoubleFloatExample()
{
	string str = "123.456";

	// Convert string to integer
	int num_int = stoi(str);

	// Convert string to float
	float num_float = stof(str);

	// Convert string to double
	double num_double = stod(str);

	// Output the results
	cout << "Original String = \"" << str << "\"" << endl;
	cout << "num int = " << num_int << endl;
	cout << "num float = " << num_float << endl;
	cout << "num double = " << num_double << endl;

}

int main()
{
	StringToIntDoubleFloatExample();
	return 0;
}
////////////////////////////////////////////

include <iostream>
using namespace std;

void inttodoublefloat(){

    int a = 20.345;
    string str = "2354.234"
    int c = 10;
    int e = 534.2323;

    int num_A = itos(a);
    int num_str = stof(b);
    int num_str = stoi(c);
    int num_str = stod(e);

    cout << num_A;
    cout << num_B;
    cout << num_C;
    cout << num_E;
}


int main(){

    inttodoublefloat();

}