#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> num{ 10,20,30 };

	// access elements;
	cout << "The second number is: " << num[2];
	cout << "The second number is: " << num.at(2);


}