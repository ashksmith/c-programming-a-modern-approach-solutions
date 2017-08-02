/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 15

   (a) Declare a tag for an enumeration who values represent the seven days of the 
       week.
   (b) Use typedef to define a name for the enumeration of part (a)
*/

#include <stdio.h>

int main(void){
	// (a)
	enum days_of_week {MON, TUE, WED, THU, FRI, SAT, SUN};
	// (b)
	typedef enum {MA, TI, KE, TO, PE, LA, SU} Day_Finnish;

	return 0;
}

