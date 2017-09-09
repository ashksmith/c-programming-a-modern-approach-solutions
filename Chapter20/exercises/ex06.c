/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 20, exercise 6

   Use the bitwise operators to write the folowing function:

   unsigned short swap_bytes(unsigned short i);

   a
   swap bytes should return the number that results from swapping the two bytes
   in i. For example, if i has the value 0x1234 (00010010 00110100 in binary)
   then swap bytes should return 0x3412 (00110100 00010010 in binary).

   b
   Condense the function into one statement

*/

#include <stdio.h>
unsigned short swap_bytes(unsigned short i);

int main(void){
	unsigned short x = swap_bytes(440);
	printf("%d\n", x);


	return 0;
}
// part a and b
unsigned short swap_bytes(unsigned short i){
	return (i << 8) | (i >> 8);
}
