/* Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 13, exercise 6

"Write a function named censor that modifies a string by replacing every occurance
of foo by xxx. For example, the string "food fool" becomes "xxxd xxxl". Make
the function as short as possible without sacrificing clarity."
*/

#include <ctype.h>
#include <stdio.h>

int censor(char str[], int n){
	int i = 0;
	while(str[i++] != '\0'){
		if(str[i] == 'f' && str[i + 1] == 'o' && str[i + 2] == 'o'){
			str[i] = 'x';
			str[i + 1] = 'x';
			str[i + 2] = 'x';
			i = i + 2;
		}
	}
}

int main(void){
	char input_string[50] = "Welcome to the foody food channel for fools";
	censor(input_string, 50);
	printf("%s\n", input_string);
	return 0;
}
