/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 7
 *
 * Write the following function:
 *
 * bool search(const int a[], int n, int key);
 *
 * a is an array to be searched, n is the number of elements in the array,
 * and key is the search key. Search should return true if key matches
 * some element of a, and false if it dosnt. Use pointer arithmetic
 * to visit array elements.
 */

#include <stdio.h>
#include <stdbool.h>

bool search(const int [], int, int);

int main(void){
	int input[] = {7,4,2};
	printf("%d\n", search(input, 3, 2));
	printf("%d\n", search(input, 3, 12));


	return 0;
}

bool search(const int a[], int n, int key){
	bool result = false;
	const int *p;
	for(p = a; p < a + n; p++){
		if(*p == key){
			result = true;
		}
	}
	return result;
}
