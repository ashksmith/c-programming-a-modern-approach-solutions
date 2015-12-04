/* Author: Ashley K. Smith
 * Solution to "C Programming: A modern approach" chapter 2, programming project 6
 * Modify the program of programming project 5 so that the polynomial is evaluated using the following foumula: 
	((((3x + 2) x- 5)x-1)x+8)x-6
*/

#include <stdio.h>

int main(void){
	int n;
	printf("Please enter a value: ");
	scanf("%d", &n);
	printf("result is: %d", (((((3 * n + 2) * n - 5) * n - 1) * n + 7) * n - 6));
	printf("\n");
	
	return 0;
}
