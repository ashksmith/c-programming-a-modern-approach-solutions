/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 5
 *
 * Write a function num_digits(n) that returns the number of digits in a positive
 * integer.
 */

#include <stdio.h>

int num_digits(unsigned int n);

int main(void){
	printf("num_digits test(100) expected 3, actual: %d", num_digits(100));
	printf("\nnum_digits test(9) expected 1, actual: %d", num_digits(9));
	printf("\nnum_digits test(150050) expected 6, actual: %d\n", num_digits(150050));
	return 0;
}

/* Takes a positive integer n, and returns the number of digits in that figure. */
int num_digits(unsigned int n){
	int digit_counter = 0;
	while(n > 0){
		n /= 10;
		digit_counter++;
	}

	return digit_counter;
}

