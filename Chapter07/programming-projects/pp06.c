/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 7, programming project 6
 *
 * Write a program that prints the values of sizeof(int), sizeof(short). sizeof(long), sizeof(float), sizeof(double), sizeof(long double).
 */ 

#include <stdio.h>
int main(){
	printf("The size of int(bytes): %d\n", sizeof(int));
	printf("The size of short int(bytes): %d\n", sizeof(short int));
	printf("The size of long(bytes): %d\n", sizeof(long));
	printf("The size of float(bytes): %d\n", sizeof(float));
	printf("The size of double(bytes): %d\n", sizeof(double));
	printf("The size of long double(bytes): %d\n", sizeof(long double));
	return 0;
}
