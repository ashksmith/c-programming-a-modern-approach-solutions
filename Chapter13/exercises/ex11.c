/* Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 13, exercise 11

The Q&A section at the end of this chapter shows how the strcmp
function might be written using array subscripting. Modify
the function to use pointer arithmetic instead.
*/

#include <stdio.h>

int strcmp(char *s, char *t){
	for(; *s == *t; s++, t++)
		if(*s == '\0')
			return 0;
	return *s - *t;
}

int main(){
	char s1[] = "computer";
	char s2[] = "science";
	int result = strcmp(s1, s2);
	printf("%d\n", result);
	return 0;
}
