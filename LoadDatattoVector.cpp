#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;


void vLoadingDatafromFiletoVector(string Filename, vector <string> &vFileContent) {

	fstream getmyfile;
	getmyfile.open(Filename, ios::in);

	if (getmyfile.is_open()) {
		string Line;

		while (getline(getmyfile, Line)) {
			 vFileContent.push_back(Line);
		} 
		getmyfile.close();
	}

}


int main() {
	vector <string> vFileContent;

	vLoadingDatafromFiletoVector("Textdokument (neu)", vFileContent);

	for (string& Line : vFileContent) {
		cout << Line;
	}
}