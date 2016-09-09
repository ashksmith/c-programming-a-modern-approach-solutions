/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, programming project 3
 *
 * Modify the redigit.c program of section 8.1 so that the user can enter more
 * than one number to be tested for repeated digits. The program should terminate
 * when the user enter a number that's less than or equal to 0.
 */

#include <stdio.h>

int main(){
	int input = 1, digit, i, seenDigits[10] = {0};

	while(input > 0){
		printf("Enter a number: ");
		scanf("%d", &input);
		int n = input;

		if(input <= 0){
			printf("\nExiting...");
			break;	
		}
		while(n > 0){
			digit = n % 10;
			seenDigits[digit] += 1;
			n /= 10;
		}

		printf("Digit: \t\t");
		for(i = 0; i < 10; i++){
			printf("%d  ", i);
		}

		printf("\nOccurrences:    ");
		for(i = 0; i < 10; i++){
			printf("%d  ", seenDigits[i]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

