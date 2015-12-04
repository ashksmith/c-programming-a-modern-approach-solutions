/* Author: Ashley K. Smith
 * Solution to "C Programming: A modern approach" chapter 2, programming project 8
 * Write a program that calculates the remaining balance on a loan after the first, second and third monthly payments.
*/

#include <stdio.h>

int main(void){
	float loanAmount, interestRate, monthlyPayment, balanceRemaining;
	printf("Enter amount of loan: $");
	scanf("%f", &loanAmount);
	printf("Enter interest rate: ");
	scanf("%f", &interestRate);
	printf("Enter monthly payment :");
	scanf("%f", &monthlyPayment);

	interestRate = interestRate / 12;
	balanceRemaining = loanAmount;

	printf("\nBalance remaining after first payment: $%0.2f", balanceRemaining = balanceRemaining + ((balanceRemaining / 100) * interestRate) - monthlyPayment);
	printf("\nBalance remaining after second payment: $%0.2f", balanceRemaining = balanceRemaining + ((balanceRemaining / 100) * interestRate) - monthlyPayment);
	printf("\nBalance remaining after third payment: $%0.2f", balanceRemaining = balanceRemaining + ((balanceRemaining / 100) * interestRate) - monthlyPayment);

	printf("\n");

	return 0;
}
