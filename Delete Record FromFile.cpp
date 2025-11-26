#include <iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
void SaveVectortoFile(string namefile, vector<string>vfilecontente)
{
	fstream Myfile;
	Myfile.open(namefile, ios::out);
	if (Myfile.is_open())
	{
		for (string& line : vfilecontente)
		{
			if (line != "")
			{
				Myfile << line << endl;
			}
		}
		Myfile.close();
	}

}
void loadfilecontante(string filename, vector<string>vfillcontente)
{
	fstream Myfile;
	Myfile.open(filename, ios::in);
	if (Myfile.is_open())
	{
		string line;
		while (getline(Myfile, line))
		{
			vfillcontente.push_back(line);
		}
		Myfile.close();
	}

}
void deleterecordinfile(string filename, string record, vector<string>& vfilecontente)
{

	loadfilecontante(filename, vfilecontente);
	for (string& line : vfilecontente)
	{
		if (line == record)
		{

			line = "";

		}


	}

	SaveVectortoFile(filename, vfilecontente);

}
void printfilecontante(string filename)
{
	fstream Myfile;

	Myfile.open(filename, ios::in);
	if (Myfile.is_open())
	{
		string line;


		while (getline(Myfile, line))
		{

			cout << line << endl;

		}
		Myfile.close();
	}

}
int main()
{
	vector<string>vfilecontente{ "omar" ,"oum kalthoume","khadoury","mohamed","mohamed" };
	SaveVectortoFile("Myfile.text", vfilecontente);
	cout << "filecontante befor delete record in file " << endl;
	printfilecontante("Myfile.text");

	deleterecordinfile("Myfile.text", "omar", vfilecontente);
	
	cout << "filecontante befor delete record in file " << endl;
	printfilecontante("Myfile.text");




}