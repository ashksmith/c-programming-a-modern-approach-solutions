/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 7, programming project 14.
 *
 * Write a program that uses Newton's method to compute the square of a positive 
 * floating point number. 
 */ 

#include <stdio.h>
#include <math.h>

int main(){
	double x = 0.0, y = 1.0, xy = 0.0, avg = 0.0, oldY = 0.0;
		
	printf("Enter a positive number: ");
	scanf("%lf", &x);	

	do {
		xy = x / y;
		avg = (y + xy) / 2;
		oldY = y;
		y = avg;
	} while ((fabs(oldY - y)) > (0.0001 * y));
	
	printf("Square root: %f\n", avg);

	return 0;
}
