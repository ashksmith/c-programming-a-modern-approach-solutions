/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 20, exercise 7

   unsigned int rotate_left(unsigned int i, int n);
   unsigned int rotate_right(unsigned int i, int n);

   rotate_left should return the result of shifting the bits in i to the left
   by n places with the bits that were shifted off moved to the end of i.
   For example, the call rotate_left(0x12345678, 4) should return 0x23456781
   if integers are 32 bits long.

   rotate_right is similar, but it should rotate bits to the right instead of left.
*/

#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void){
	unsigned int num = 0x12345678;
	printf("0x%x\n", rotate_left(num, 8));
	printf("0x%x\n", rotate_right(num, 8));
	return 0;
}

unsigned int rotate_left(unsigned int i, int n){
	printf("0x%x\n", i);
	return (i >> (32 - n)) | (i << n);
}

unsigned int rotate_right(unsigned int i, int n){
	return (i << (32 - n)) | (i >> n);
}
