/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 11, exercise 4.
 *
 * Write the following function:
 *
 * void swap(int *p, int *q);
 *
 * When passed the addresses of two variables, swap should exchange the variables.
 */

#include <stdio.h>
void swap(int *p, int *q);

int main(void){
	int x = 10, y = 20;
	swap(&x, &y);
	printf("Swap test. Expected: x = 20, y = 10. Actual: x = %d, y = %d\n", x, y);

	return 0;
}

void swap(int *p, int *q){
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}

