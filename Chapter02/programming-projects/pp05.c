/* Solution to "C Programming: A modern approach" chapter 2, programming project 5
 * Write a program that asks the user to enter a value for x and then dispays the value of the following polynomial:
		3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * Test output, if n = 3, answer is 762.
*/

#include <stdio.h>

int main(void){
	int n;
	printf("Please enter a value: ");
	scanf("%d", &n);
	printf("result is: %d", 3*(n*n*n*n*n)+2*(n*n*n*n)-5*(n*n*n)-(n*n)+7*n-6);
	printf("\n");
	
	return 0;
}
