/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 22, exercise 6

   Write a call of printf that prints:
   	1 widget

   if the widget variable (of type int) has the value 1, and

	   n widgets otherwise

   Where n is the value of widget. You are not allowed to the if statement or any other statement;
   the answer must be a single call of printf.
*/
#include <stdio.h>

int main(void){
	int widget = 1;
	printf("%d widget%s\n", widget, (widget == 1) ? "" : "s");
	widget = 5;
	printf("%d widget%s\n", widget, (widget == 1) ? "" : "s");
	return 0;
}
