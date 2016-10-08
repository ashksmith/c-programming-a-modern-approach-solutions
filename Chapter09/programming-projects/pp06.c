/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, programming project 6
 *
 * Write a function that computes the value of the following polynomial:
 *
 * 3x^5 + 2x^4 - 5x^3 - x^ + 7x - 6
 */

#include <stdio.h>
#include <math.h>

int compute_poly(int x);

int main(void){
	printf("Result: Expected 92, actual, %d\n", compute_poly(2));
	printf("Result: Expected 762, actual, %d\n", compute_poly(3));
}

int compute_poly(int x){
	return 3 * (pow(x, 5)) + 2 * (pow(x, 4)) - 5 * (pow(x, 3)) - pow(x, 2)
		 + (7 * x) - 6;
}

