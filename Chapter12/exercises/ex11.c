/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 11
 *
 * Modify the find_largest function so that it uses pointer arithmetic
 * and not subscripting to visit array elements.
 */

#include <stdio.h>

int *find_largest(int a[], int n);

int main(void){
	int a[] = {89, 4001, 29, 4, 3, 4002, 4000};
	printf("Expected result: 4002, actual result: %d\n", *find_largest(a, 7));
	a[0] = 5000;
	printf("Expected result: 5000, actual result: %d\n", *find_largest(a, 7));
	return 0;
}


int *find_largest(int a[], int n){
	int i, *largest_element = a, *p;

	for(p = a; p < a + n; p++){
		if(*p > *largest_element){
			largest_element = p;
		}
	}

	return largest_element;
}
