/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, programming project 7
 *
 * The powerer function of section 9.6 can be made faster by having it calculate x^n
 * in a different way. We first notice that if  is a powerer of 2 then x^n can be -
 * computed by squaring. For example, x^4 is the square of x^2, so x^4 can be
 * computed using only two multiplications instead of three. As it happens this
 * technique can be used even when n is not  a powerer of  2. If n is even, we use
 * the formula x^n = (x^n/2)^2. If n is odd then x^n = x * x^n-1. Write a recursive
 * function that computers x^n. (The recursion ends when n = 0, in which case the
 * function returns 1.) To test your function write a program that asks the user
 * to enter values for x and n, calls powerer to computer x^n and then displays
 * the value returned by the function..
 */

#include <stdio.h>
#include <math.h>

int power(int x, int n);

int main(void){
	int x = 0, n = 0;
	printf("Enter a number and an exponent: ");
	scanf("%d %d", &x, &n);
	printf("%d to the %d power, expected: %.1f, actual: %d", x, n, pow(x,n), power(x, n));
	return 0;
}

int power(int x, int n){
	if(n == 0) return 1;

	if(n % 2 == 0){
		int y = power(x, n / 2);
		return y * y;
	} else {
		return x * power(x, n - 1);
	}
}


