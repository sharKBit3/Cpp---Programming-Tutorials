#pragma once
#include <iostream>
using namespace std;

namespace library1 {


	

	int Function1(int a, int b) {
		
		return a + b;

	}




	int Fun2() {

		int v1, v2;

		cout << "enter your value1:   ";
		cin >> v1;
		cout << "enter your value2:   " ;
		cin >> v2;
		int sum = v1 + v2;


		return sum;
	};

	int Fun3() {

		int result;
		string Er;


	
		/*
		if (result >= 90) {
			cout << "AA";
		}
		else if (result >= 85) {
			cout << "BA";
		}
		else if(result >= 80) {
			cout << "BB";
		}
		else if (result >= 75) {
			cout << "CB";
		}
		else if (result >= 70) {
			cout << "CC";
		}
		else {
			cout << "Fail";
		}

		
		
		*/
		


		
	for (int i = 0; i <= result; i++) {
		cout << "enter your result";
		cin >> result;
		
		Er = (result >= 95) ? "AA" :
			(result >= 90) ? "BA" :
			(result >= 85) ? "BB" :
			(result >= 80) ? "CB" :
			(result >= 70) ? "CC" : "Fail";

		cout << Er;

	}

		return 0;
	}

}


#include <iostream>
#include "library1.h";

using namespace std;



int main() {

	//cout << library1::Function1(10, 20);

	int name = library1::Fun2();
	cout << name;


}
