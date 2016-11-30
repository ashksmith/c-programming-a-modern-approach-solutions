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
#define HOURS  24

int find_largest(int a[], int n);

int main(void){
	//(*p)[HOURS] is an pointer to an unnamed array of integers HOURS Long.
	int temperatures[DAYS][HOURS] = {0}, (*p)[HOURS] = {0}, i = 0, *pt;

	//pt begins by pointing at the address for temperatures[0][0]
	//each successive increment will make it point to temperatures[0][1]..[0][2]..[0][12]..
	//upon reaching temperatures[0][HOURS-1] (Zero counting), we incremement to temperatures[1][0] and continues
	for(pt = &temperatures[0][0]; pt < &temperatures[DAYS-1][HOURS-1]; pt++){
		*pt = rand() % 32;
	}

	//p = row i of temperatures.
	//when p is incremented, we incrememnt to the next row. 
	//Condition ensures that we don't overstep row 7
	for(p = &temperatures[i]; p < &temperatures[DAYS]; p++, i++){
		printf("%d ", find_largest(*p, HOURS));
		printf("%d ", *p);
	}


	return 0;
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
