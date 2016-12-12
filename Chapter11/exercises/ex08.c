/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 11, exercise 8.
 *
 * Write the following function
 * int *find_largest(int a[], int n);
 *
 * when passed an array a of length n, the function will return a pointer to
 * array's largest element.
 */

#include <stdio.h>
/* Function of type pointer to int*/
int *find_largest(int a[], int n);



int main(void){
	int array[] = {9, 25, 19, 18, 41, 7};
	printf("find_largest test. Expected 41, actual:%d\n", *find_largest(array	, 6));


	return 0;
}

int *find_largest(int a[], int n){
	int i, largest_element = a[0];
	for(i = 0; i < n; i++){
		if(a[i] > a[largest_element])
				largest_element = i;
	}
	return &a[largest_element];
}
