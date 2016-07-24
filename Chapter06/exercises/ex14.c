/* Author: Ashley K. Smith
   Solution to "C Programming: A Modern Approach" Chapter 6, exericse 14

Q: Find the error in the following program fragment and fix it

for (n % 2 == 0);
	printf(n is even \n");

*/

#include <stdio.h>
int main(){
	int n = 10;
	if(n % 2 == 0){
		printf("n is even\n");
	}
}
