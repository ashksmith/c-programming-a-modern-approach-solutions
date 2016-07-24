/* Author: Ashley K. Smith
   Solution to "C Programming: A Modern Approach" Chapter 6, exericse 13

Q: Rewrite the following loop so that its body is empty:

for(n = 0; m > 0; n++)
	m /= 2;

*/

//A:
#include <stdio.h>
int main(){
	int m, n;
	m = 30;
	for(n = 0; m > 0; n++, m /= 2)
	
	return 0;
}
