/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 6, programming project 1

Q: Write a program that finds the largest in a series of numbers entered by the user. The program must
promp the userto enter numbers on by one. When the user enters 0 or a negative number the program must
display the largest nonnegative number entered. 

*/

//A:
#include <stdio.h>
int main(){
	float input = 1, highestVal = 1;
	while(input > 0){
		printf("Enter a number: ");
		scanf("%f", &input);
		if(input > highestVal)
			highestVal = input;
	}
	printf("\nThe largest number entered was %.2f\n\n", highestVal);
	return(0);
}

