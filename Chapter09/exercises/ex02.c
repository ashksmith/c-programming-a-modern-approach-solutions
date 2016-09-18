/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 2
 *
 * Write a function check(x, y, n) that returns 1 if both x and y fall between 0
 * and n - 1, inclusive. The function should return 0 otherwise. All variables are int.
 */

#include <stdio.h>
int check(int x, int y, int n); //check prototype

int main(void){
	printf("Test inputs: ");
	printf("\n(1, 3, 5) expected 1, actual: %d", check(1, 3, 5));
	printf("\n(9, 1, 5) expected 1, actual: %d", check(3, 1, 5));
	printf("\n(3, 5, 1) expected 0, actual: %d\n", check(3, 5, 1));

	return 0;
}

//test if x, y are greater than 0 and less than n - 1. 
//Returns 1 if true, 0 otherwise. 
int check(int x, int y, int n){
	n = n--;
	if((x >= 0 && x <= n) && (y >= 0 && y <= n))
		return 1;

	return 0;
}
