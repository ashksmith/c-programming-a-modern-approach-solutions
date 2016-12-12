/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 6
 *
 * Rewrite the following function use pointer arithmetic instead of subscripting.
 * Make as few changes as possible.
 *
 * int sum_array(const int a[]. int n){
 *	int i, sum;
 *
 *	sum = 0;
 *	for(i = 0; i < n; i++){
 *		sum += a[i];
 *	}
 *	return sum;
 * }
 */

#include <stdio.h>

int sum_array(int a[], int n);

int main(void){
	int input[] = {1, 2, 3, 4, 5};

	printf("\n%d\n", sum_array(input, 5));
	return 0;
}

/* Returns the sum of all elements in array a*/
int sum_array(int a[], int n){
	int *p, sum = 0;
	for(p = a; p < a + n; p++){
		sum += *p;
	}

	return sum;
}
