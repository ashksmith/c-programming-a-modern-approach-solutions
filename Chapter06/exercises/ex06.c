/* Author: Ashley K. Smith
   Solution to "C Programming: A Modern Approach" Chapter 6, exericse 5

Q: Translate the program  fragment of exercise 1 into a single for statement
*/

//A: 
#include <stdio.h>
int main(){
	double i;
	for(i = 1; i <= 128; i *=2) { printf("%d ", i); }
	return 	0;
}
