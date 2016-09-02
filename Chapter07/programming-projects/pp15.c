/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 7, programming project 15
 *
 * Write a program that computes the factorial of a positive number, what is 
 * the largest value of n for which the program correctly prints the factorial
 * of n, do this for each data type. (short, int, long, long long, float, double, long double).
 * In cases with floating points, the program will display a close approximation of the factorial
 * not necessarily the exact value.
 */ 

#include <stdio.h>
#include <math.h>

//The largest value of n for short is 7
//The largest value of n for int is 12
//The largest value of n for long is the same as int, on my system they both use 4 bytes. 
//The largest value of n for a long long is 12
//The largest value of n for float is 34.
//The largest value of n for double is 170
//The largest value of n for long double is 1754

int main(){
	long double n = 0.0, i = 0.0, result = 1.0;
	
	printf("Enter a positive number: ");
	scanf("%lf", &n);	
	
	for(i = 1; i <= n; i++){
		result = result * i;
	}
	
	printf("Factorial of %.0f: %0.f\n", n, result);
	return 0;
}
