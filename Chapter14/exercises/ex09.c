/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 14, exercise 9

   Write the following parameterized macros.
   (a) CHECK(x, y, n) Has te value 1 if both x and y falled between 0 and n - 1.
   (b) MEDIAN(x, y, z) finds the median of x, y and z
   (c) POLYNOMIAL(x) Computes the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.
*/

#include <stdio.h>
#include <math.h>

#define CHECK(x, y, n) ((x) && (y) < ((n) - 1) && (x) && (y) > 0 ? 1 : 0)
#define MEDIAN(x, y, z) (x)
#define POLYNOMIAL(x) ((3*pow((x),5.0)+(2*pow((x), 4.0))-(5*pow((x),3.0))-((x) * (x)) + (7*(x)) - 6))
int main(void){
	printf("%d\n", CHECK(10, 5, 4));
	printf("%d\n", MEDIAN(14, 7, 21));
	printf("%.0f\n", POLYNOMIAL(2));
	return 0;
}


