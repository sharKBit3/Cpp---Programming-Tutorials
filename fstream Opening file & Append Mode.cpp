#include <iostream>
#include <fstream>

using namespace std;

int main() {

	fstream NewFile0;
	NewFile0.open("Textdokument (neu).txt", ios::out);//output txtfile !~

    fstream NewFile;
	NewFile.open("Textdokument (neu).txt", ios::out | ios::app);

	if (NewFile.is_open()) {
		NewFile << "The is the first line: " << endl;
		NewFile << "The is the second line: " << endl;
		NewFile << "The is the third line: " << endl;

		NewFile.close();
	}




}