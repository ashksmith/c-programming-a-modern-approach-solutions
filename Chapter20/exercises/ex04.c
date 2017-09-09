/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 20, exercise 1

   In computer graphics, colours are often stored as three numbers, representing red, green
   and blue intensities. Suppose that each number requires eight bits, and we'd like to
   store all the values in a single long integer. Write a macro named MK_COLOUR with
   three parameters (red, green, blue intensities). MK_COLOR should return a long in
   which the last three bytes contain the red, green and blue intensities. The red
   value is the last byte, and the green value as the next to last byte, blue is the
   first.
*/

#define MK_COLOUR(r,g,b) ((long) (b) << 16 | (g) << 8 | (r))

#include <stdio.h>

int main(void){
	long i = MK_COLOUR(28,93,42);
	printf("R  G  B\n");
	// Shift i right to bring the numbers to play 0, use ff as a mask to retrieve 1 byte.
	printf("%d:%d:%d\n", (i >> 0) & 0xff, (i >> 8) & 0xff, (i >> 16) & 0xff);

	return 0;
}

// After processing
// int main(void){
//  long i = ((long) (42) << 16 | (93) << 8 | (28));
//  printf("R  G  B\n");
//  printf("%d:%d:%d\n", (i >> 0) & 0xff, (i >> 8) & 0xff, (i >> 16) & 0xff);
//
//  return 0;
// }
