#include <iostream>
#include <cstdio>



using namespace std;


int main() {

	int y[2][3]{

		{1,2,3},
		{1,2,3}
	};


	for (int a = 0; a < 2; a++) {
		cout << "\n";
		for (int b = 0; b < 3; b++) {
			cout << y[a][b] << " ";
		}

	}

		/*

				int x[10][10];


				for (int i = 0; i < 10; i++) {
					for (int j = 0; j < 10; j++) {
						x[i][j] = (i + 1) * (j + 1);
					}


				}
				for (int i = 0; i < 10; i++) {
					for (int j = 0; j < 10; j++) {
						printf("%0*d ", 2, x[i][j]);
					}
					cout << "\n";
				}
			}
		*/

}