#include <iostream>
#include <vector>

using namespace std;

int  main() {

	//vector <int> numbers{ 10,20,30,40,50 };
	vector <char> characters{ 'A','B', 'C', 'D','E' };

	cout << "the numbers are";

	for (char  &num : characters) {
		cout << " " << num << " ";
	}

	// type from datastructure :: vector stack;
	vector <int> Num;

	Num.push_back(10);
	Num.push_back(20);
	Num.push_back(30);
	Num.push_back(40);
	Num.push_back(50);

	for (int& sum : Num) {
		cout << "\n";
		cout << sum;
	}



}