/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 12 programming project 1
 *
 * (a) Write a program that reads a message, then prints the reversal of the
 *     message.
 *
 * (b) Revise the program to use a pointer instead of an integer to keep track
 *     of the current position in the array.
 */

#include <stdio.h>
int main(void){
	char a[5] = {'A', 'B', 'C', 'D', 'E'}, *p;
	int i;

	for(i = 5; i >= 0; i--)
		printf("%c ", a[i]);

	printf("\n");
	for(p = &a[4]; p >= a; p--)
		printf("%c ", *p);
}
