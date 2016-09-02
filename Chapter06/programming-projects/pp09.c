/* Author: Ashley K. Smith
 * Solution to "C Programming: A modern approach" chapter 6 programming project 9
 * 
*/

#include <stdio.h>

int main(void){
	float loanAmount, interestRate, monthlyPayment, balanceRemaining;
	int i, n;

	printf("Enter amount of loan: $");
	scanf("%f", &loanAmount);
	printf("Enter interest rate: ");
	scanf("%f", &interestRate);
	printf("Enter monthly payment :");
	scanf("%f", &monthlyPayment);
	printf("Enter the number of payments: ");
	scanf("%d", &i);

	interestRate = interestRate / 12;
	balanceRemaining = loanAmount;

	for(i = 1; i <= n; i++){
		printf("\nBalance remaining after third payment: $%0.2f", balanceRemaining = balanceRemaining + ((balanceRemaining / 100) * interestRate) - monthlyPayment);
	}
	printf("\n");

	return 0;
}
