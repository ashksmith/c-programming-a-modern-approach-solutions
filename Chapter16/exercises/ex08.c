/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 8

   Let colour be the following structure:

   struct colour {
   	int red;
	int green;
	int blue;
   };

   (a) Write a declaration for a const variable named MEGENTA of type struct colour
       whose members have the values 255, 0 and 255.

   (b) Repeat part (a) but use a designated initialiser that doesn't specify the value
       of green, allowing it to be 0.
*/

#include <stdio.h>
struct colour { int red, green, blue; };

int main(void){
	// (a) 
	const struct colour MAGENTA = {255, 0, 255};
	// (b)
	const struct colour MAGENTAB = {.red = 255, .blue = 255};

	printf("red = %d, green = %d, red = %d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);
	printf("red = %d, green = %d, red = %d\n", MAGENTAB.red, MAGENTAB.green, MAGENTAB.blue);
}
