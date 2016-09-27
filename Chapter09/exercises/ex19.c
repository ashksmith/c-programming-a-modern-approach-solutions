/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 19
 *
 * Consider the following "mystery" function:
 *
 * void pb(int n){
 *	if(n != 0){
 *		pb(n/2);
 *		putchar('0' + n % 2);
 *	}
 * }
 */

#include <stdio.h>

void pb(int n);

int main(void){
	pb(151);
	printf("\n");
	return 0;
}

//Prints the value n in base2 form.
void pb(int n){
	if(n != 0){
		pb(n / 2);
		putchar('0' + n % 2);
	}
}
