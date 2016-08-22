/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, programming project 5
*/

#include <stdio.h>
int main(void){
	float tax;
	printf("Enter taxable income: $");
	scanf("%f", &tax);
	
	if(tax < 750.00f)
		printf("Tax due: $%.2f\n", (tax / 100) * 1);
	else if (tax >= 750.00f && tax <= 2250.00f)
		printf("Tax due: $%.2f\n", ((tax / 100) * 2) + 7.50f);
	else if (tax >= 2250.00f && tax <= 3750.00f)
		printf("Tax due: $%.2f\n", ((tax / 100) * 3) + 37.50f);
	else if (tax >= 3750.00f && tax <= 5250.00f)
		printf("Tax due: $%.2f\n", ((tax / 100) * 4) + 82.50f);
	else if (tax >= 5250.00f && tax <= 7000.00f)
		printf("Tax due: $%.2f\n", ((tax / 100) * 5) + 142.00f);
	else
		printf("Tax due: $%.2f\n", ((tax / 100) * 6) + 230.00f);

	return 0;
}

