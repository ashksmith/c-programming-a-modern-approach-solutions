/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 15
 *
 * The following (rather confusing) function finds the median of three numbers.
 * Rewrite the function so tat it has just one return statement. 
 */

#include <stdio.h>

double median(double x, double y, double z);

int main(void){
	return 0;
}

double median(double x, double y, double z){
	double median;
	if(x <= y)
		if(y <= z) median = y;
		else if(x <= z) median = z;
		else median = x;
	if(z <= y) median = y;
	if(x <= z) median = x;

	return median;
}

