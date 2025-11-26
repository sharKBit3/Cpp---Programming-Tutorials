#include <iostream>
using namespace std;


int main(){
    
int a,b,c,temp;
int* ptr1, *ptr2, *ptr3;

    cout << "first number before swapping = " ;
    cin>> a;
    cout << "\nYour number is: " << a;
    
    cout << "\nsecond number before swapping = " ;
    cin>> b;
    cout << "\nYour number is: " << b;

    cout << "\nthird number before swapping = " ;
    cin>> c;
    cout << "\nYour number is: " << c;
  
    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = temp;

    cout << "\n*********numbers after swapping********" << endl ;
        cout << "your first swipped number is: " << *ptr1 << endl;
        cout << "your second swipped number is: " << *ptr2 << endl;
        cout << "your third swipped number is: " << *ptr3 ;



}