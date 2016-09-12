/* Author: Ashley K. Smith
 * Solution for "C Programming A Modern Approach" chapter 8, programming project 13
 *
 * Modify programming project 11 from chapter 7 so that the program labels its output:
 * 
 * Enter a first and last name: Lloyd Fosdick
 * You entered the name: Fosdick, L.
 *
 * The program will need to store the last name (but not the first name) in an array 
 * of characters until it can be printed. You may assume the last name is no longer than
 * 20 characters long.
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	char input, firstInitial, lastName[20] = {};
	int i;

	printf("Enter a first and last name: ");

	while ((input = getchar()) == ' '){
		//do nothing, skip over whitespace (32)
	}

	firstInitial = input;

	while ((input = getchar()) != ' '){
		//do nothing
	}

	for(i = 0; (i <= 19) && ((input = getchar()) != '\n'); i++){
		if(input != ' ')
			lastName[i] = input;
		
	}
	
	printf("You entered the name: ");
	for(i = 0; i <= 19; i++){
		if(isalpha(lastName[i]))
			putchar(lastName[i]);
	}
	printf(", %c.\n", firstInitial);
}
