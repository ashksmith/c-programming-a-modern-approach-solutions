/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 4

   Repeat exercise 3, but this time using a type named complex. 
*/ 

#include <stdio.h>

// (a)
typedef struct { double real; double imaginary; } complex;
// (c)
complex  make_complex(double d1, double d2){
 	complex s = {d1, d2};	
	return s;
}

// (d)
complex add_complex(complex s1, complex s2){
	complex s = {s1.real + s2.real, s1.imaginary + s2.imaginary};
	return s;
}

int main(void){
	// (b)
	complex c1, c2, c3;

	// example
	c1 = make_complex(5.0, 10.0);
	c2 = make_complex(3.0, 5.0);
	c3 = add_complex(c1, c2);

	printf("Expected result: 8, 15. Actual result: %.0f, %.0f\n", c3.real, c3.imaginary);

	return 0;
}


