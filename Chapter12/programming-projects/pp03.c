/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 12 programming project 3
 *
 * Simplify programming project 1(b) by taking advantage of the fact than
 * an array name can be used as a pointer.
 */

#include <stdio.h>

int main(void){
	char a[5] = {'A', 'B', 'C', 'D', 'E'}, *p;
	char *a_last_element;

	for(a_last_element = &a[4]; a_last_element >= a; a_last_element--)
		printf("%c", *a_last_element);

	printf("\n");
}
