#include <iostream>
#include <vector>

using namespace std;


int main() {


	vector <int> x{ 10,20,3,4,5,6 };

	cout << "intialized Vector: " << endl;
	for (const int& i : x) {

		cout << i << " ";
	}

	cout << "\n\nUpdated Vector: " << endl;
	for (int& i : x) {
		i = 10;
		cout << i << " ";
	}

   // access elments;
	x[1] = 5; // Mentioning by x[];
	x.at(4) = 0; // Mentioning by x.at();


	cout << "\n\n\aUpdated Vector: " << endl;
	for (const int& i : x) {
		cout << i << " ";
	}



}