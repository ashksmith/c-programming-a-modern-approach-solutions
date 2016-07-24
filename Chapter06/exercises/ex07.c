/* Author: Ashley K. Smith
   Solution to "C Programming: A Modern Approach" Chapter 6, exericse 5

Q: Translate the program fragment of exercise 2 into a single for statement
*/

//A: 
#include <stdio.h>
int main(){
	int i = 9384;
	for(; i > 0; i /= 10) { printf("%d ", i); }
	return 0;
}
