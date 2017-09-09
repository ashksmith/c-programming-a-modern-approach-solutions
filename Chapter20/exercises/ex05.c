/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 20, exercise 1

   Write macros named GET_RED, GET_GREEN and GET_BLUE that when given a
   colour as an argument return it's 8bit red, green and blue intensities.

*/

#define MK_COLOUR(r,g,b) ((long) (b) << 16 | (g) << 8 | (r))
#define GET_RED(i) ((char) (i >> 0) & 0xff)
#define GET_GREEN(i) ((char) (i >> 8) & 0xff)
#define GET_BLUE(i) ((char) (i >> 16) & 0xff)
#include <stdio.h>

int main(void){
	long i = MK_COLOUR(28,93,42);
	printf("R  G  B\n");

	printf("%d:%d:%d\n", GET_RED(i), GET_GREEN(i), GET_BLUE(i));

	return 0;
}



