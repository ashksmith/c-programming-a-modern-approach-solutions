/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 6, programming project 2

Q: Write a program that asks the user to enter two integers, then calculates and displays their greatest
common divisor (GCD).

*/

//A:
#include <stdio.h>
int main(){
	int  m = 0, n = 0, tmp;
	
	printf("Enter two integers:");
	scanf("%d %d", &m, &n);
	
	while(n != 0){
		tmp = m % n;
		m = n;
		n = tmp;
	}
	printf("Great common divisor: %d\n", m);
	return(0);
}
