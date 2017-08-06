/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 17 exercise 3

   Write the following function:
   int *create_array( int n, int initial_value);
   The function should return a pointer to a dynamically allocated int array with
   n members, each of which is intiailized to intitial_value. The return value
   should be NULL if the array cannot be allocated.

*/

#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value){
	// allocate memory for n * sizeof(int) bytes of memory
	int *p = malloc(n * sizeof(int)), i, *a;

	// Just using pointer arithmetic for practise.
	// subscript solution below
	for(a = p; a < p + n; a++){
		*a = initial_value;
	}

	// We can now use p as an array name, and loop through to give
	// the initial values
	//for(i = 0; i < n; i++)
	//	p[i] = initial_value;

	return p;
}

int main(void){
	int i, *a = create_array(15, 11);
	for(i = 0; i < 15; i++)
		printf("i[%d]:%d ", i + 1,  a[i]);

	putchar('\n');

	return 0;
}

