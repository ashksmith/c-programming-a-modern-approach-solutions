/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 16.
 *
 * Write a loop that prints the highest temperature in the temperatures array for
 * each day of the week. The loop body should call the find_largest function,
 * passing it one row of the array at a time.
 */

#include <stdio.h>
#include <stdlib.h>

#define DAYS 7
#define HOURS 24


int find_largest(int [], int);

int main(void){
	int temperatures[DAYS][HOURS], (*p)[HOURS], i, y;

	/* Populate temperatures array with fluff */
	for(i = 0; i < DAYS; i++){
		for(y = 0; y < HOURS; y++){
			temperatures[i][y] = rand() % 32;
		}
	}

	/* Create two high value integers for function to find*/
	temperatures[0][1] = 404;
	temperatures[3][13] = 405;

	/* p = &temperatures[0], p < the 7 rows of temperatures,
	 * increment p through the rows*/
	for(p = temperatures; p < &temperatures[DAYS]; p++){
		/* *p is a pointer to p'th row temperatures, pass to function */

		printf("%d ", find_largest(*p, HOURS));
	}

}

int find_largest(int a[], int n){
	int largest = a[0], *p;
	for(p = a; p < a + n; p++){
		if(*p > largest){
			largest = *p;
		}
	}
	return largest;
}
