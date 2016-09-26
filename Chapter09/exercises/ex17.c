/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 17
 *
 * Rewrite the fact function so that is is no longer recursive.
 */

#include <stdio.h>

int fact(int n);

int main(void){
	printf("fact test. Expected 720, actual: %d\n", fact(6));
	return 0;
}

int fact(int n){
	int result = 1;
	while(n > 0){
		result *= n;
		n--;
	}
	return result;
}
