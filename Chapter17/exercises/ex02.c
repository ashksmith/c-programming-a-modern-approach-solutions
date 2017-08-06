/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 17 exercise 2

   Write a function named duplicate that uses dynamic storage allocation to create
   a copy of a string. For example, the call:
   p = duplicate(str);
   would allocate space for a string of the same length as str, copy the contents
   of str into the new string, and return a pointer to it. Have duplicate
   return a null pointer if the memory allocation fails.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *duplicate(char *str){
	// allocate memory for string. strlen does not count the required
	// null terminator character as part of the string length, + 1 to include it
	// otherwise strcpy will miss it.
	char *tmpstr = malloc(strlen(str) + 1);

	// Test if malloc returned a null pointer
	if(tmpstr == NULL)
		return NULL;

	// Copy str argument into freshly allocated memory, and return it.
	strcpy(tmpstr, str);
	return tmpstr;
}

int main(void){
	char *s = "test";
	printf(duplicate(s));

	return 0;
}
