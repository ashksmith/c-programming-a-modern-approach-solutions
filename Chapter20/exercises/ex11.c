/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 20, exercise 10

   Each of the folowing macro defines the position of a single bit within an
   integer.

	#define SHIFT_BIT 1
	#define CTRL_BIT  2
	#define ALT_BIT   4

   The following statement is suposed to test whether any of the three bits have
   been set, bt it never displays the specified message. Explain why the statement
   dosn't work and show how to fix it. Assume that key_code is an int variable.

   	if (key_code & (SHIFt_BIT | CTRL_BIT | ALT_BIT) == 0)
		printf("No modifier keys pressed\n";
*/

#include <stdio.h>

#define SHIFT_BIT 1
#define CTRL_BIT  2
#define ALT_BIT   4

int main(){
	int key_code = 0;
	// The issue is that the relational equivalence operator has a higher 
	// precedence than both bitwise AND and bitwise OR.
	if((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
		printf("No modifier keys pressed\n");

	printf("%d\n", key_code);
}

