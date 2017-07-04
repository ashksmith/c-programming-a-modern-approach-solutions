/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 13, exercise 1

   Write a macro NELEMS(a) that computers the number of elements in a one-deimensions array a.
*/
#include <stdio.h>
#include <stdlib.h>

#define NELEMS(a) (sizeof((a)))

int main(void){
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	//-1 removes the string null character from the count.
	printf("Number of elements in alphabet is 26, actual: %d\n", NELEMS(alphabet) - 1);
	return 0;
}
