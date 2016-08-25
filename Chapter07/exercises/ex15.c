/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 7, exercise 15
 *
 * Q: Use typedef to create types named Int8, Int16, and Int32. Define the types
 *    so that they represent 8-bit, 16-bit and 32-bit integers on your machine
 * */

#include <stdio.h>
int main(){
	//Using the standard library, could also include stdint.h and use int8_t etc
	typedef char Int8;
	typedef short int Int16;
	typedef long int Int32;

	printf("Bit length of Int8: %zu", sizeof(Int8) * 8);
	printf("\nBit length of Int16: %zu", sizeof(Int16) * 8);
	printf("\nBit length of Int32: %zu\n", sizeof(Int32) * 8);
}
