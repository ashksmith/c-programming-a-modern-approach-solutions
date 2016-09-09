/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, programming project 1
 *
 * Modify the repdigit.c program of section 8.1 so that it shows which digits (if any)
 * were repeated.
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

	printf("Repeated digits: ");
	
	for(i = 0; i < 10; i++){
		if(seenDigits[i] > 1)
			printf("%d ", i);
	}

	return 0;
}

