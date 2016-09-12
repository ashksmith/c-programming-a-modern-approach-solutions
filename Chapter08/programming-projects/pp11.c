/* Author: Ashley K. Smith
 * Solution for "C Programming A Modern Approach" chapter 8, programming project 11
 *
 * Modify programming project 4 from Chapter 7 so that the program labels its output:
 *
 * Enter phone number: 1-800-COL-LECT
 * In numeric form: 1-800-265-5328
 *
 * The program will need to store the phone number (Either in its original form
 * or in numeric form). in an array of characters until it can be printed. You may
 * assume that the phone number is no more than 15 characters long. 
*/

#include <stdio.h>
#include <ctype.h>
int main(){
	char phoneNum[15], input;
	int i = 0;
	
	printf("Enter phone number: ");

	for(i = 0; i < sizeof(phoneNum) / sizeof(phoneNum[0]) && (input = getchar()) != '\n'; i++){
		switch(toupper(input)){
			case 'A': case 'B': case 'C':
				phoneNum[i] = '2';
				break;
			case 'D': case 'E': case 'F':
				phoneNum[i] = '3';
				break;
			case 'G': case 'H': case 'I':
				phoneNum[i] = '4';
				break;
			case 'J': case 'K': case 'L':
				phoneNum[i] = '5';
				break;
			case 'M': case 'N': case 'O':
				phoneNum[i] = '6';
				break;
			case 'P': case 'Q': case 'R': case 'S':
				phoneNum[i] = '7';
				break;
			case 'T': case 'U': case 'V':
				phoneNum[i] = '8';
				break;
			case 'W': case 'X': case 'Y': case 'Z':
				phoneNum[i] = '9';
				break;
			default:
				phoneNum[i] = input;
				break;
		}
	}

	printf("In numeric form: ");
	for(i = 0; i < (sizeof(phoneNum) / sizeof(phoneNum[0])); i++){
		printf("%c", phoneNum[i]);
	}	
	//formatting
	printf("\n");
	return 0;
}
