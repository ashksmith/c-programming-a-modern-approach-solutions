/* Ashley K. Smith (github.com/ashksmith)
 * Part of the solution to Solution to "C Programming: A Modern Approach" chapter 15, programming project 4
*/

#include "readline.h"
#include <stdio.h>
int read_line(char str[], int n){
	int ch, i = 0;

	while((ch = getchar() != '\n'))
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}
