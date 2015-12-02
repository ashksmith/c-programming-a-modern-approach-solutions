/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 2, exercise 3.
 * Condense the dwight.c program by (1) replacing the assignments to height, length and width with initializers and (2) removing th weight variable, instead
 * calculating (volume + 165) + 166 within the last printf	
*/

#include <stdio.h>

int main(){
	int height = 8, width = 12, length = 10, volume = height * length * width;
	printf("Dimesions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimesional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}

