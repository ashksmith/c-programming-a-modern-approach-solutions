/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12.4, pointers
 * and multi-dimensional arrays, exercise 14.
 *
 * Assume that the following array contains a week's worth of hourly temperature
 * readings, with each row containing the readings for one day:
 *
 * int temperatures[7][24];
 *
 * Write a statement that uses the search function to search the entire temperatures
 * array for the value 32
 */

#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n , int key);

int main(void){
	int temperatures[7][24] = {0}, *p = temperatures[0];
	bool flag = false;
	//set a value to search for
	temperatures[4][15] = 32;

	flag = search(&temperatures[0][0], 7 * 24, 32);

	if(flag)
		printf("32 found\n");
	else
		printf("No 32 found\n");

	//remove 32 for testing
	temperatures[4][15] = 12;
	flag = search(&temperatures[0][0], 7 * 24, 32);

	if(flag)
		printf("32 found\n");
	else
		printf("32 not found\n");

	return 0;
}

bool search(const int a[], int n , int key){
	const int *p;
	for(p = a; p < a + n; p++){
		if(*p == key){
			return true;
		}
	}
	return false;
}
