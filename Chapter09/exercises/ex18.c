/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 18
 *
 * Write a recursive version of the gcd function (exercise 3).
 *
 */

#include <stdio.h>

int gcd(int m, int n);

int main(void){
	printf("GCD Test (45, 30) expected 15, actual: %d", gcd(45, 30));
	printf("\nGCD Test (100, 5) expected 5, actual: %d", gcd(100, 5));
	printf("\nGCD Test (44, 144) expected 4, actual: %d\n", gcd(44, 144));
	return 0;
}

int gcd(int m, int n){
	if(n == 0){
		return m;
	} else {
		gcd(n, m % n);
	}
}
