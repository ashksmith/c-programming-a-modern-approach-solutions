/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 14, exercise 6

   Write a macro DISP(f, x) that expands into a call of printf that displays the
   value of the function f when called with argument x. Write a second macro
   that similar to DISP by works for functions with two arguments.
*/

#include <stdio.h>
#include <math.h>


#define DISP(f,x) (printf("%s(%.1f) = %.1f\n", (#f), (x), (f(x))))
#define DISP2(f, x, y) (printf("%s(%.1f, %.1f) = %.1f\n", (#f), (x), (y), (f((x), (y)))))

int main(void){
	//round being passed as f will be turned into a string by # operator
	DISP(round, 64.7);
	DISP2(pow, 5.0, 2.0);
	return 0;
}

