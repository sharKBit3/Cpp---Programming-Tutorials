#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> Name;

	Name.push_back(10);
	Name.push_back(20);
	Name.push_back(30);
	Name.push_back(40);
	Name.push_back(50);

	cout << "you have : " << Name.size() << " Push_backs" << endl;

	Name.pop_back();
	Name.pop_back();
	Name.pop_back();
	Name.pop_back();

	for (int& Num : Name) { 

			cout << Num;



	}
	


}