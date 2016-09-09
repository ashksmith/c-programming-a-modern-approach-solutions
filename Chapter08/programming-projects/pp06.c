/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, programming project 6
 *
 * Write a filter that converts a normal message into 1337 speak. 
 */

#include <stdio.h>
#include <ctype.h>

int main(void){
	char message[255] = {0}, input, i = 0, msgLength = 0;	

	printf("Enter a message: ");
	while((input = getchar()) != '\n'){
		message[msgLength] = input;	
		msgLength++;	
	}

	for(i = 0; i < msgLength; i++){
		switch(toupper(message[i])){
			case 'O':
				putchar('0');
				break;
			case 'I':
				putchar('1');
				break;
			case 'E':
				putchar('3');
				break;
			case 'A':
				putchar('4');
				break;
			case 'S':
				putchar('5');
				break;
			case 'B':
				putchar('8');
				break;
			default:
				putchar(message[i]);
				break;
		}
	}
	printf("!!!!!!!!!!!!!!\n");
	return 0;
}

