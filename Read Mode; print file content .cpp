#include <iostream>
#include <fstream>
#include <string>
using namespace std;

///////// data in the text file while showing it from the command*******; 
void printFileContent(string File) {

	fstream getmyfile;
	getmyfile.open(File, ios::in);

	if (getmyfile.is_open()) {
		string Line;

		while (getline(getmyfile, Line)) {
			cout << Line << endl;
		} 

	}

}


int main() {

	printFileContent("Textdokument (neu).txt");


}