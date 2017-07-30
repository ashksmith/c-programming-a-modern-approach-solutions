/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 3

   (a) Show how to declare a tag named complex for a structure with two members
       real and imaginary of type double.

   (b) Use the complex tag to declare variables named c1, c2 and c3.
      
   (c) Write a function named make_complex that stores it's two arguments 
       (Both type double) in a complex structure, then return the structure.

   (d) Write a function name add_complex that add the corresponding members of its 
       arguments (Both complex structures), then returns the result as a complex 
       structure.
*/ 

#include <stdio.h>

// (a)
struct complex { double real; double imaginary; };
// (c)
struct complex  make_complex(double d1, double d2){
	struct complex s = {d1, d2};	
	return s;
}
// (d)
struct complex add_complex(struct complex s1, struct complex s2){
	struct complex s = {s1.real + s2.real, s1.imaginary + s2.imaginary};
	return s;
}

int main(void){
	// (b)
	struct complex c1, c2, c3;

	// example
	c1 = make_complex(5.0, 10.0);
	c2 = make_complex(3.0, 5.0);
	c3 = add_complex(c1, c2);

	printf("Expected result: 8, 15. Actual result: %.0f, %.0f\n", c3.real, c3.imaginary);

	return 0;
}


