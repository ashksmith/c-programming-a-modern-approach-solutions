/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 6, programming project 3

Q: Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms. 
*/

//A:
#include <stdio.h>
int main(){
	int x, y, tmp, numerator, denominator;
	printf("Please enter a fraction in the format x/y ");
	scanf("%d/%d", &x, &y);
	numerator = x;
	denominator = y;
	while(y != 0){
		tmp = x % y;
		x = y;
		y = tmp;
	}
	numerator /= x;
	denominator /= x;
	printf("In lowest terms: %d/%d\n", numerator, denominator);


	return(0);


}
