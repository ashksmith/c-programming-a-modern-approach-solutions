/* Author: Ashley K. Smith
 * Solution to "C Programming: A modern approach" chapter 2, programming project 7
 * Write a program that asks the uset to enter a U.S. dollar amount and then shows how to pay
 * that amount using the smallest number of 20, 10, 5 and 1 dollar bills.
*/

#include <stdio.h>

int main(void){
	int n, twenties, tens, fives, ones;
	printf("Please enter an amount: $");
	scanf("%d", &n);

	twenties = n / 20;
	n = n % 20;
	printf("\n$20 bills: %d", twenties);

	tens = n / 10;
	n = n % 10;
	printf("\n$10 bills: %d", tens);

	fives = n / 5;
	n = n % 5;
	printf("\n $5 bills: %d", fives);

	ones = n / 1;
	n = n % 1;
	printf("\n $1 bills: %d", ones);

	printf("\n");

	return 0;
}
