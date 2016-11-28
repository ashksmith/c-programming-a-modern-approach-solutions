/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 10
 *
 * Modify the find_midle function of section 11.5 so that is uses pointer arithmetic
 * to calculate the return value.
 */

#include <stdio.h>
int *find_middle(int a[], int n);

int main(void){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", *find_middle(a, 10));
	return 0;

}

//Returns the middle element of a
int *find_middle(int a[], int n){
	return a + (n / 2);
}


