/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12.4, pointers
 * and multi-dimensional arrays, exercise 15.
 *
 * Write a loop that prints all temperature readings stored in row of the
 * temperature array. Use a pointer to visit each element of that row
 */

#include <stdio.h>
#include <stdlib.h>


int main(void){
	int temperatures[7][24] = {0}, *p;
	int i = 3;

	//Assign a pointer to row i in temperatures.
	//Test against the base of row i in temperature + the next 24 columns.
	//incremenet p
	for(p = temperatures[i]; p < temperatures[i] + 24; p++){
		//Assign a value under 32 just for some flavour
		*p = rand() % 32;
		printf("%d ", *p);
	}

	return 0;
}
