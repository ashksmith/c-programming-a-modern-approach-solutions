/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 *Solution to "C Programming: A modern Approach" chapter 13, exercise 1

 Write parameterized macros that computer the following values
 (a) The cube of x
 (b) The remaining when n is divided by 4
 (c) 1 if the product of x and y is less than 100, 0 otherwise
*/
#include <stdio.h>
#include <math.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define MULTIPLY(x, y) ((x) * (y) < 100 ? 1 : 0)

int main(void){
	printf("C standard pow(5 ^ 3) = %.0f, using CUBE macro = %d\n", pow(5.0, 3), CUBE(5));
	printf("Remainder of 78 divided by 4 is 2, using macro: %d\n", REMAINDER(78));
	printf("5 * 5 is less than 100, expecting 1, actual: %d\n", MULTIPLY(5, 5));
}
