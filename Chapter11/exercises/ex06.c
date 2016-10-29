/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 11, exercise 6.
 *
 * Write the following function:
 *
 * void find_two_largest(int a[], int n, int *largest, int *second_largest);
 *
 * when passed an array of length n, the function will search a for it's largest
 * and second largest elements, storing them in the variables pointed to by
 * largest and second_largest.
 */

#include <stdio.h>
#include <stdlib.h>
void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void){
	int i, largest, second_largest, num_arr[10] = {56, 1, 19, 21, 101, 25, 17, 98, 40, 9};
	find_two_largest(num_arr, 10, &largest, &second_largest);

	printf("find_two_largest test. Expected: 101, 98. Actual: %d, %d\n", largest, second_largest);

	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
	int x, y, swap;
	for(x = 0; x < n; x++){
		for(y = 0; y < n - 1; y++){
			if(a[y] > a[y + 1]){
				swap = a[y + 1];
				a[y + 1] = a[y];
				a[y] = swap;
			}
		}
	}
	*largest = a[n - 1];
	*second_largest = a[n - 2];
}




