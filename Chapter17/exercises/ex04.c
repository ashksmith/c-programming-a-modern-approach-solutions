/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 17 exercise 4

   Suppose that the following declarations are in effect:

   struct point { int x, y; };
   struct rectangle { struct point upper_left, lower_right; };
   struct rectangle *p;

   Assume that we want p to point to a rectangl structure who upper left corner
   is at (10, 25) and whose lower right corner is at (20, 15). Write a series of
   statements that allocate such a structure and initialise it as indicated.
*/

#include <stdio.h>
#include <stdlib.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
struct rectangle *p;

int main(void){
	// Assign memory to pointer p  the size of a rectangle structure
	p = malloc(sizeof(struct rectangle));

	// Don't forget to test for a null pointer
	if(p == NULL){
		printf("Error allocating memory");
		exit(EXIT_FAILURE);
	}

	// Initialise p variables using right arrow selection operator or indirection
	(*p).upper_left.x = 10;
	(*p).upper_left.y = 20;
	p->lower_right.x = 20;
	p->lower_right.y = 15;

	// Output values
	printf("p upper left = %d,%d\n", (*p).upper_left.x, (*p).upper_left.y);
	printf("p lower right = %d,%d\n", p->lower_right.x, p->lower_right.y);
	return 0;
}

