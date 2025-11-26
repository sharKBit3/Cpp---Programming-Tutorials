#include <iostream>

using namespace std;

int main() {


	int* ptri;
	int* ptrj;
	// dynamiclly allocate memory

	ptri = new int;
	ptrj = new int;

	// assign vallues to the memory
	*ptri = 10;
	*ptrj = 20;

	cout << *ptri;
	cout << *ptrj;

	//dellocate memory;
	delete ptri;
	delete ptrj;
	

}