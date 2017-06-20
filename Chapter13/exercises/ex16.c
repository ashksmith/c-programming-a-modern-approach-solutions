/* Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 13, exercise 16

Use the techniques of Section 13.6 to condense the count_space function of
Setion 13.4. In particular, replace the for statement by a while loop.
*/

#include <stdio.h>

int count_space(const char *s){
	int count = 0;
	while(*s++)
		if(*s == ' ')
			count++;
	return count;
}

int main(void){
	char *input_string = "testing testing 1 2 3";
	printf("Expected output = 4, actual output = %d\n", count_space(input_string));
	return 0;
}
