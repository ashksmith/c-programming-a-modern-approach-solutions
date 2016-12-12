/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 12
 *
 * Write the following function:
 * void find_two_largest(const int *a, int n, int *largest, int *second_largest);
 *
 * a points to an array of length n. The function searches the array for it's
 * largest and second largest integer, storing them in the variables pointed to
 * by the largest and second_largest respecitvly. Use pointer arithmetic, not
 * subscripting to visit array elements.
 */

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void){
	int first = 0, second = 0;
	int a[] = {101, 12, 15, 14, 99, 600, 102};
	find_two_largest(a, 7, &first, &second);
	printf("Expected result: 600, 102. Actual result: %d %d\n", first, second);
	a[5] = 9;
	a[6] = 8;
	find_two_largest(a, 7, &first, &second);
	printf("Expected result: 101, 99. Actual result: %d %d\n", first, second);
	return 0;
}

//finds largest, and second largest integer value in an array.
void find_two_largest(const int *a, int n, int *largest, int *second_largest){
	const int *p;
	//Make sure largest and second largest storage locations are empty.
	*largest = 0;
	*second_largest = 0;

	/* p = a, point p at the first element of a
	 * p < (a + n). Arrays are stored in consecutive blocks of memory.
	 * adding n to a will increment by essentially 4 bytes to the next
	 * integer location. Comparing p to (a + n) will compare their
	 * repsective position in the array. This loop will continue until
	 * (a + n) is greater than p.
	 * p++ increments the position in the array.
	 */
	for(p = a; p < a + n; p++){
		/* Test if current element is greater than current largest; if so, current largest becomes second largest
		 * and largest is current element of a (p)*/
		if(*p > *largest){
			*second_largest = *largest;
			*largest = *p;
		} else if (*p > *second_largest){
			*second_largest = *p;
		}
	}
}

