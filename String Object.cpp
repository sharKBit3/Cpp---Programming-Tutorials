#include <iostream>
#include <string>

using namespace std;

int main() {

	string S1 = "Ash, ALi";
	
	cout << S1.length() << endl;
	
	cout << S1.at(2) << endl;
	
	S1.append("tar");
	cout << S1 << endl;
	
	S1.insert(1,"$");
	cout << S1 << endl;

	cout << S1.substr(0,2) << endl; // to prin from 0 to 1;

	cout << S1.find("ALi") << endl;

	if (S1.find("ali") == S1.npos) {
		cout << "ali is not found";
	}


	S1.clear();


}