/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 14, exercise 8

   Suppose we want a macro that expands into a string containing the current line
   number and file name. In other words we'd like to write

   	const char *str = LINE_FILE;

	and have it expand into

	const char *str = "Line 10 of file foo.c";

   Where foo.c is the file containing the program and 10 is the line on which the
   invocation of LINE_FILE appears. Warning: This exercise is for experts only. Be
   sure to read the Q&A section carefully before attempting!
*/

// Admitedly I had to look this one up. From what I undeustand this is known as a
// "double macro stringify hack". Passing __LINE__to stringify will return
// "__LINE__", passing "__LINE__" a second time with TOSTRING will expand
// to the actual line number as a string. __FILE__ already expands to a
// string thus does not need additional directives.

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define LINE_FILE "Line " TOSTRING(__LINE__) " of file " __FILE__

#include <stdio.h>

int main(void){
	char *str = LINE_FILE;
	printf("%s\n", str);
	return 0;
}
