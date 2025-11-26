#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;


void SaveVtoData(string Filename, vector <string> &vFileContent) {

	fstream getmyfile;
	getmyfile.open(Filename, ios::out);

	if (getmyfile.is_open()) {
		string Line;

		for (string& Line : vFileContent) { 
			if (Line != "") 
		{ 
				getmyfile << Line << endl;
			}
		}
		getmyfile.close();
	}

}


int main() {
	vector <string> vFileContent {"ali", "Maher", "Saad", "Moutaz"};

	SaveVtoData("Textdokument (neu)", vFileContent);

	
}