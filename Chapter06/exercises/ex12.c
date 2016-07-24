/* Author: Ashley K. Smith
   Solution to "C Programming: A Modern Approach" Chapter 6, exericse 12

Q: The following "prime-testing2 loop apeared in section 6.4 as an example: 

for(d = 2; d< n; d++)
	if(n % d == 0)
		break;

This loop isn't very efficient. It's not nessessary to divide n by all numbers between 2 and n - 1 
to determine whether it's prime. In fact, we need only check divisors up the square root of n
Modify the loop to take advantage of this fact. Hine: Don't try to compute the square root of n;
instead compare d * d with n

*/

//A:
#include <stdio.h>

int main(void)
{
	int n, d;
	n = 29;
	for(d = 2; d * d <= n; d++){
		if(d * d <=n)
			printf("%d is divisible by %d\n", n, d);
		else
			printf("%d is prime\n", n);
	}
	return 0;
}

