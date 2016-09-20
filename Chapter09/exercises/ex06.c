/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 6
 *
 * Write a function digit(n, k) that returns kth digit (from the right) in a 
 * positive integer. 
 */

#include <stdio.h>

int digit(int n, unsigned int k);

int main(void){
	printf("digit(1, 135) test expected 5, actual: %d", digit(1, 135));
	printf("\ndigit(2, 401) test expected 0, actual: %d", digit(3, 401));
	printf("\ndigit(4, 6981) test expected 6, actual: %d\n", digit(4, 6981));

	return 0;
}

int digit(int n, unsigned int k){
	n--;
	while(n > 0){
		n--;
		k /= 10;
	}
	return k % 10;
}

