/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 6, programming project 3
 *
 * Q: Modify the sum2.c program from section 7.1 to sum a series of double values.
 */

#include <stdio.h>
int main(){
	int n, sum = 0;

	printf("This program sums a series of doubles. \n");
	printf("Enter integers (0 to terminate): ");

	scanf("%d", &n);

	while(n != 0){
		sum += n;
		scanf("%d", &n);
	}
	printf("The sum is: %d\n", sum);

	return 0;
}

