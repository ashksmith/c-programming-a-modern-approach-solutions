/* Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 13, exercise 5

"Write a functioned named capitalize that capitalizes all letters in it's
argument will be a null-terminated string containing arbitrary characters, not
just letters. Use array subscripting to access the characters in the string."
*/

#include <ctype.h>
#include <stdio.h>

int capitalize_a(char [], int n);
int capitalize_b(char [], int n);

int main(void){
	char input_string[7] = {'A', 's', 'h', 'l', 'e', 'y', '\0'};
	capitalize_b(input_string, 7);
	printf("%s\n", input_string);
	return 0;
}

int capitalize_a(char str[], int n){
	int i = 0;

	for(i = 0; i < n - 1; i++)
		str[i] = toupper(str[i]);
	return i;
}

int capitalize_b(char str[], int n){
	char *sp;

	for(sp = &str[0]; sp < &str[n]; sp++){
		*sp = toupper(*sp);
	}
}
