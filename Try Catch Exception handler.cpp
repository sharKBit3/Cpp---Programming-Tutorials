#include <iostream>
#include <vector>


using namespace std;

int main() {

	vector <int> x{ 1,2,3,4,5 };

	try {
		cout << x.at(5);
	}
	catch(...) {
		cout << "out of bound...";

	}



}
