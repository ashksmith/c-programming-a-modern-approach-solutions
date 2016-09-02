/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" Chapter 7, programming project 10.
 *
 * Write a progam that counts the number of vowels in a sentence. 
 */ 

#include <stdio.h>
#include <ctype.h>
int main(){
	char input;
	int vowels = 0;

	printf("Enter a sentence: ");
	do {
		input = getchar();
		switch(toupper(input)){
			case 'A': case 'E': case 'I': case 'O': case 'U':
				vowels += 1;
				break;
				
		}

	} while (input != '\n');
	
	printf("Your sentence contains %d vowels\n", vowels);
	return 0;

}
