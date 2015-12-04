/* Author: Ashley K. Smith
 * Solution to "C Programming: A modern approach" chapter 2, programming project 4
 * Write a program that asks the uset to enter a dollar-and-cents amount, the displays the amount with 5% tax added:
*/

#include <stdio.h>

int main(void){
	float input;	
	printf("Enter an amount: $");
	scanf("%f", &input);
	
	printf("With tax added: $%0.2f", input + (input / 100) * 5);
	printf("\n");
	return 0;
}
