/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 20, exercise 1

   Describe a simple way to "toggle" a bit (Change it from 0 to 1 or from 1 to 0). 
   Illustrate the technique by writing a statement that toggles bit 4 of the variable i.

   Bitwise operators may be used to set, clear or test bits in a variable. The inclusive
   OR may be used to set bits in the following way:

   i = 0xaf //  1010 1111 // 175
   i |= 0x10 // 0001 0000

   Result =     1011 1111 // 191

   To clear a bit, we can use the inverse of the mask ANDed to the variable

   i & (~0x10) 
   i = 0xaf // 1011 1111 // 191
   ~0x10 =     1110 1111
   i & ~0x10 = 1010 1111 // 175
 */

#include <stdio.h>

int main(void){
	unsigned int i = 0xaf;
	printf("Setting bit will make i 191: %d\n", i |= 0x10);
	printf("Clearing bit 4, will make 1 175: %d\n", i & ~0x10);

	// To toggle, we need an if statement, or a conditional operator statement.
		
	//if true, else false (1 or 0)
	
	i |= 0x10;

	printf("The result of the first toggle should be 191: %d\n", i);
	
	i &= ~0x10;

	printf("The result of the second toggle should be 175: %d\n", i);
	return 0;
}
