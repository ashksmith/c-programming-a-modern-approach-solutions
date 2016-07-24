/* Author: Ashley K. Smith
   Solution to "C Programming: A Modern Approach" Chapter 6, exericse 9

Q: translate the for statement into exercise 8 into an equivalent while statement. You will need
one statement in adition to the while loop itself
*/

//A
#include <stdio.h>
int main(){
	int i = 10;
	while (i >= 1){
		printf("%d ", i++);
		i /= 2;
	}
	return 0;
}
