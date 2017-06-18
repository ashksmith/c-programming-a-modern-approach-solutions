/*Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 13, exercise 4

Modify the read_line function in each of the following ways:

(a) Have it skip white space before beginning to store input characters.
(b) Have it stop reading at the first white-space character
(c) Have it stop reading at the first new-line character, then store the
    new-line character in the string.
(d) Have it leave behind characters that it dosn't have room to store.
*/

#include <stdio.h>
#include <ctype.h>

int read_line_a(char [], int);
int read_line_b(char [], int);
int read_line_c(char [], int);
int read_line_d(char [], int);

int main(void){
	char input_string[100];
	read_line_d(input_string, 5);
	printf("%s", input_string);
	return 0;
}

int read_line_a(char str[], int n){
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if(isspace(ch) && i ==0){
			//do nothing
		} else if (i < n) // if character read count is less than max string capacity
			str[i++] = ch;

	str[i] = '\0'; // Indicate end of string
	return i;
}

int read_line_b(char str[], int n){
	int ch, i = 0;

	while (!isspace(ch = getchar())) // Take input while ch != new line
		if (i < n) // If i is less than string length n
			str[i++] = ch; // str[i++] = ch
	str[i] = '\0'; //Make last element eol
	return i; // return number of characters entered
}

int read_line_c(char str[], int n){
	int ch, i = 0;

	while ((ch = getchar()) != '\n') // Take input while ch != new line
		if (i < n) // If i is less than string length n
			str[i++] = ch; // str[i++] = ch
	str[i++] = '\n';
	str[i] = '\0'; //Make last element eol
	return i; // return number of characters entered
}

// (d) Have it leave behind characters that it dosn't have room to store.
int read_line_d(char str[], int n){
	int ch, i = 0;

	while ((ch = getchar()) != '\n') // Take input while ch != new line
		if (i < n) // If i is less than string length n
			str[i++] = ch; // str[i++] = ch
	str[i] = '\0'; //Make last element eol
	return i; // return number of characters entered
}
