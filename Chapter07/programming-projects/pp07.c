/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 7, programming project 7.
 *
 * Modify programming project 6 from chapter 3 so that the user may add, subtract and multiply or divide two fractions by entering
 * either +, -, * or / between the fractions.
 */ 

#include <stdio.h>
int main(){
	char sign;
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter two fractions seperated by +, - * or / sign: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);
	
	switch(sign){
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			printf("The result is %d/%d\n", result_num, result_denom);
			break;
		case '-':
			result_num = (num1 * denom2) - (num2 * denom1);
			result_denom = denom1 * denom2;
			printf("The result is %d/%d\n", result_num, result_denom);
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			printf("The result is %d/%d\n", result_num, result_denom);
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = num2 * denom1;
			printf("The result is %d/%d\n", result_num, result_denom);	
			break;
		default: 
			printf("Please try again..\n");
	}

	return 0;
}
