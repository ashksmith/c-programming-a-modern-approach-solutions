/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 16
 *
 * Condense the fact function in the same way we condensed power.
 *
 */

#include <stdio.h>

int fact(int n);

int main(void){
	return 0;
}

int fact(int n){
	return n <=1  ? 1 : n * fact(n - 1);
}
