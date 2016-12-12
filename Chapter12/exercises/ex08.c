/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 7
 *
 * Rewrite the following function to use pointer arithmetic instead of array 
 * subscripting. Make as few changes as possible.
 *
 */

#include <stdio.h>

void old_store_zeroes(int a[], int n){
	int i;
	for(i = 0; i < n; i++)
		a[i] = 0;
}

void store_zeroes(int a[], int n);

int main(void){
	int input[] = {68, 93, 12, 31, 1, 5, 9}, i, n = 7;
	//print the values of input before calling function
	printf("Before calling store_zeroes\n");
	for(i = 0; i < n; i++){
		printf("%d ", input[i]);
	}

	printf("\n\nAfter calling store_zeroes\n");
	store_zeroes(input, n);

	//print the values of input after calling function
	for(i = 0; i < n; i++){
		printf("%d ", input[i]);
	}
	//Formatting
	printf("\n");
	return 0;
}

void store_zeroes(int a[], int n){
	int *p;
	//The pointer p points at the first element of a. 
	//Incrementing p moves p to the next address of a
	//Using the indirection operator, each element becomes 0
	for(p = a; p < a + n; p++)
		*p = 0;

}
