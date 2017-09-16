/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 21, programming project 1

   Write a program that declares the s structure (see Section 21.4) and prints the
   sizes and offsets of a, b and c members. Have the program print the size of the
   entire structure as well. From this information, determine whether or not the
   structure has any holes. If it does, describe the location and size of each
*/

#include <stdio.h>
#include <stddef.h>

struct s {
	char a;
	int b[2];
	float c;
} s;

int main(void){
	// should be 0, 8, 12 or so
	printf("a offset: %d\n", offsetof(struct s, a));
	printf("a size: %d\n", sizeof(s.a));
	printf("b offset: %d\n", offsetof(struct s, b));
	printf("b size: %d\n", sizeof(s.b));
	printf("c offset: %d\n", offsetof(struct s, c));
	printf("c size: %d\n", sizeof(s.c));
	return 0;
}
