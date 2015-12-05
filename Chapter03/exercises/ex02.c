/* Author: Ashley K. Smith
 * Solution to "C Programming: A modern approach" chapter 3, exercise 2	
*/

#include <stdio.h>

int main(void){
	float x = 10;
	//(a) Exponential notation: left justified in a field of size 8;  one digit after the decimal point
	printf("%-8.1g", x);

	return 0;
}
