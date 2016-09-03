/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, exercise 5
 *
 * The Fibonacci numbers are 0,1,1,2,3,5,8,13 ...., where each number is the sum of 
 * two preceeding numbers. Write a program fragment that declares an array named
 * 'fib_numbers' of length 40 and fills the array with the first 40 Fibonacci numbers.
 */ 

#include <stdio.h>

int main(){
	int fib_numbers[40] = {0, 1}, i = 0;
	//i = 2, to skip the first 2 elements
	for(i = 2; i < (sizeof(fib_numbers) / sizeof(fib_numbers[0])); i++){
		fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
		printf("%d ", fib_numbers[i]);
	}
	return 0;
}
