/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 7, programming project 12.
 *
 * Write a program that evaluates an expression. The operands in the expression are floating-point
 * numbers; the operators are +, -, *, and /. The expression is evaluated from left to right.
 * (No operator takes precedence over any other operator.
 */ 

#include <stdio.h>
#include <ctype.h>

int main(){
	char input, sign;
	float n1 = 0.0f, n2 = 0.0f, result = 0.0f;

	printf("Enter an expression: ");
	scanf("%f%c%f", &n1, &sign, &n2);

	switch(sign){
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			if(n1 == 0 && n2 == 0){
				printf("Divide by zero");
				break;
			} else {
				result = n1 / n2;
				break;
			}
	}
	
	printf("Value of expression: %.1f\n", result);
	return 0;
}
