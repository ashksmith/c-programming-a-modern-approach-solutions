/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" Chapter 7, programming project 11.
 *
 * Write a program that takes a firstname and last name entered by the user
 * and displays the last name, a comma and the first initial followed by a period:
 * The user's input may contain extra spaces before the first name, between the first
 * and last names and after the last name
 */ 

#include <stdio.h>
#include <ctype.h>
int main(){
	char input, firstInitial;

	printf("Enter a first and last name: ");

	while ((input = getchar()) == ' '){
		//do nothing, skip over whitespace (32)
	}

	firstInitial = input;

	while ((input = getchar()) != ' '){
		//do nothing
	}

	while((input = getchar()) != '\n'){
		if(input != ' ')
			putchar(input);
	
	}

	printf(", %c.\n", firstInitial);
}
