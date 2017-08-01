/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 7

   Assume that the fraction structure contains two members: numerator and denominator
   (both type int). Write functions that perform the following operations on
   fractions.

   (a) Reduce the fraction f to lowest terms.
   (b) Add the fraction f1 and f2.
   (c) Subtract the fraction f1 from the fraction f1.
   (d) Multiply the fractions f1 and f2.
   (e) Divide the fraction f1 by the fraction f2.
*/

#include <stdio.h>
typedef struct { int numerator, denominator; } fraction;

int gcd(int i1, int i2){
	int a = i1, b = i2, c;
	while(a != 0){
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}

// (a)
fraction reduce(fraction f){
	int i = gcd(f.numerator, f.denominator);
	f.numerator /= i;
	f.denominator /= i;
	return f;
}

// (b)
fraction add(fraction f1, fraction f2){
	fraction result;
	result.numerator = (f1.numerator * f2.denominator) + (f1.denominator * f2.numerator);
	result.denominator = f1.denominator * f2.denominator;
	return result = reduce(result);
}

// (c)
fraction subtract(fraction f1, fraction f2){
	fraction result;
	result.numerator = (f1.numerator * f2.denominator) - (f1.denominator * f2.numerator);
	result.denominator = f1.denominator * f2.denominator;
	return result = reduce(result);
}

// (d)
fraction multiply(fraction f1, fraction f2){
	fraction result;
	result.numerator = f1.numerator * f2.numerator;
	result.denominator = f1.denominator * f2.denominator;
	return result = reduce(result);
}

//e
fraction divide(fraction f1, fraction f2){
	fraction result;
	result.numerator = f1.numerator * f2.denominator;
	result.denominator = f1.denominator * f2.numerator;
	return result = reduce(result);
}

int main(void){
	fraction f1 = {4, 6};
	fraction f2 = {2, 4};
	f1 = divide(f1, f2);
	printf("Fraction = %d/%d\n", f1.numerator, f1.denominator);
	return 0;
}


