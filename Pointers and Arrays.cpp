#include <iostream>

using namespace std;

int  main() {


	int arr[5] = { 10,20,30,40,50 };
	int* ptr;
	ptr = arr;

	cout << "first array address: " << ptr << endl;
	cout << "second array address: " << ptr +1 << endl;
	cout << "third array address: " << ptr +2<< endl;
	cout << "fourth array address: " << ptr +3<< endl;
	cout << "fifth array address: " << ptr +4<< endl;



	cout << "first array value: " << *ptr << endl;
	cout << "second array value: " << *(ptr + 1) << endl;
	cout << "third array value: " << *(ptr + 2) << endl;
	cout << "fourth array value: " << *(ptr + 3) << endl;
	cout << "fifth array value: " << *(ptr + 4) << endl;

	for (int i = 0; i < 5; i++) {
		cout << ptr+i << endl;
	}

	for (int i = 0; i < 5; i++) {
		cout << *(ptr +i) << endl;
	}


}