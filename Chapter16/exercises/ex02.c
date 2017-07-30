/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 2

   (a) Declare structure variables named c1, c2 and c3 each having members real
       and imaginary of type double. 

   (b) Modify the declaration in part (a) so that c1's members initially have the values
       0.0 and 1.0, while c2's members are 1.0 and 0.0 intilally. 

   (c) Write statements that copy the members of c2 into c1. 

   (d) Write statements that add the corresponding members of c1 and c2, storing
       the result in c3.
*/

#include <stdio.h>

int main(void){
	// (a) + (b)
	struct {
		double real;
		double imaginary;
	} c1 = {0.0, 1.0}, c2 = {1.0, 0.1}, c3;

	// (c)
	c1 = c2;

	// (d)
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;

	

	return 0;
}
