x/*
            *****************Array**************
an Array sotre many data types at the same type 
its a derived datatype! it can be a string, int, float.... etc
*/


#include <iostream>
#include <string>

using namespace std;

void Oper() {
    float grade[3];
    int avg;
   
    cout << "please enter  grade1: ";
    cin >> grade[0];

    cout << "please enter grade2: ";
    cin >> grade[1];

    cout << "please enter grade3: ";
    cin >> grade[2];

    avg = (grade[0] + grade[1] + grade[2]) / 3;
    
    cout << "your average is: " << avg << endl;

}

int main() {

    int x[5] = { 10, 20, 30, 40, 50 };

    cout << x[3] << endl;
    cout << x[2] << endl;
    cout << x[0] << endl;
    cout << x[1] << endl;

   Oper();

    return 0;
}
