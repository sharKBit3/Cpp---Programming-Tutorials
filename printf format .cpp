#include <iostream>
#include <cstdio>// c#;

using namespace std;


int main() {

	int page = 1, totalpages = 10;

	printf("your page for now is %d of %d\n", 0, totalpages);
	printf("your page for now is %d of %d\n", 1, totalpages);
	printf("your page for now is %d of %d\n", 2, totalpages);
	printf("your page for now is %d of %d\n", 3, totalpages);
	printf("your page for now is %d of %d\n", 4, totalpages);
	printf("your page for now is %d of %d\n", 5, totalpages);
	printf("your page for now is %d of %d\n", 6, totalpages);

	printf(" %0*d\n", 6, totalpages);

	int number1 = 10;
	int number2 = 20;
	int sum = number1 + number2;

	printf("your sum is: %d + %d = %d\n", number1, number2, sum);

	float PI = 3.14159265;
	printf("Precision specification of %.*f\n", 1, PI);
	printf("Precision specification of %.*f\n", 2, PI);

	float x = 7.0, y = 9.0;
	printf("\nThe float division is : %.3f / %.3f = %.3f \n\n", x, y, x / y);
	
	double d = 12.24;
	printf("%.3f\n", d);



	int loss = 10;
	float boss = 10.5;

	double sum = loss + boss;
	double mult = loss * boss;
	double div = loss / boss;

	printf("the sum is: %d + %.3f = %.2f\n", loss, boss, sum);
	printf("%d * %.3f = %.3f\n", loss, boss, mult);
	printf("%d / %.3f = %.3f\n", loss, boss, div);



	int page = 1, totalpages = 10;

	printf("your page for now is %d of %d\n", 0, totalpages);
	printf("your page for now is %d of %d\n", 1, totalpages);
	printf("your page for now is %d of %d\n", 2, totalpages);
	printf("your page for now is %d of %d\n", 3, totalpages);
	printf("your page for now is %d of %d\n", 4, totalpages);
	printf("your page for now is %d of %d\n", 5, totalpages);
	printf("your page for now is %d of %d\n", 6, totalpages);

	printf(" %0*d\n", 6, totalpages);

	char c = 'S';
	printf("here is character c = %*c\n", 1, c);
	printf("here is character c = %*c\n", 2, c);
	printf("here is character c = %*c\n", 3, c);
	printf("here is character c = %*c\n", 4, c);
	printf("here is character c = %*c  ",5 ,c);


	char name[] = "abdullah ashtar";

	printf("your name is: %s", name);



	return 0;

}