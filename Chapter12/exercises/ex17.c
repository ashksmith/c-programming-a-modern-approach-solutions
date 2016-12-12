/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 17.
 *
 * Rewrite the following function to use pointer arithmetic instead of array
 * subscripting. Use a single loop instead of two nested loops.
 *
 * int sum_two_dimensional_array(const int a[][LEN], int n){
 * 	for(i = 0; i < n; i++)
 * 		for(j = 0; j < LEN; j++)
 * 			sum += a[i][j];
 *
 * 	return sum;
 * }
 */

#include <stdio.h>
#define LEN 10
#define N 5

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void){
	int a[N][LEN] = {0};

	/* Populate array with test data*/
	a[1][2] = 5;
	a[0][7] = 5;
	a[3][5] = 10;

	printf("Expected sum of a = 20, actual sum: %d\n", sum_two_dimensional_array(a, N));

}

int sum_two_dimensional_array(const int a[][LEN], int n){
	const int *p;
	int sum = 0;

	/* In c, multidimensional arrays are stored consecutively row by row in memory 
	 * Knowing this it's easy to use pointer arithmetic to increment p through the
	 * array and sum the results. Stopped at address [n-1][LEN-1] as we are 0 counting*/
	for(p = &a[0][0]; p < &a[n-1][LEN-1]; p++)
		sum += *p;

	return sum;
}
