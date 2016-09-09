/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, programming project 2
 *
 * Modify the repdigit.c program of section 8.1 so that it prints a table showing
 * how many times each digit apears in the number:
 *
 */

#include <stdio.h>

int main(){
	int input, digit, i, seenDigits[10] = {0};

	printf("Enter a number: ");
	scanf("%d", &input);

	while(input > 0){
		digit = input % 10;
		seenDigits[digit] += 1;
		input /= 10;
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
	return 0;
}

