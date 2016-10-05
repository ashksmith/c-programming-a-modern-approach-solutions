/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, programming project 2
 *
 * Modify programming project 5 from chapter 5 so that it uses a function to compute
 * the amount of income income. When passed an amount of taxable income the function
 * will return the income due.
 *
 */

#include <stdio.h>

float calculate_tax(float);

int main(void){
	float input;
	printf("Enter incomeable income: $");
	scanf("%f", &input);
	printf("Tax due: $%2.f\n", calculate_tax(input));
}

float calculate_tax(float income){
	if(income < 750.00f)
		return ((income / 100) * 1);
	else if (income >= 750.00f && income <= 2250.00f)
		return  (((income / 100) * 2) + 7.50f);
	else if (income >= 2250.00f && income <= 3750.00f)
		return (((income / 100) * 3) + 37.50f);
	else if (income >= 3750.00f && income <= 5250.00f)
		return (((income / 100) * 4) + 82.50f);
	else if (income >= 5250.00f && income <= 7000.00f)
		return (((income / 100) * 5) + 142.00f);

	return (((income / 100) * 6) + 230.00f);
}
