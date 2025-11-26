#include <iostream>

using namespace std;


int main() {


	int num;
	cout << "How many student do you have: ";
	cin >> num;

	float* ptr;
	ptr = new float[num];

	cout << "Student Grades: " << endl;
	for (int i = 0; i < num; ++i) {
		cout << "Student" << i + 1 << ": ";
		cin >> *(ptr + i);
	}

	cout << "\nDisplay Students Grade: " << endl;
	for (int i = 0; i < num; i++) {
		cout << "Student Grades" << i + 1 << ": " << *(ptr + i) << endl;
	}

	delete [] ptr;
}