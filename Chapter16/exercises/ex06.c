/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 6

   Write the following function:

   struct time split_time(long total_seconds);

   total_sectonds is a time represented as the number of seconds since midnight. The
   function returns a structure containing the equivalent time in hours, minutes and
   seconds.
*/
#include <stdio.h>
struct time { int minutes, hours, seconds; };

struct time split_time(long total_seconds){
	int i = 0;
	struct time t = {0,0,0};
	t.minutes = (total_seconds % 3600) / 60;
	t.hours = total_seconds / 3600;
	t.seconds = total_seconds % 60;
	return t;
}

int main(void){
	struct time t = split_time(4898);
	printf("Expected: 01:21:38, actual: %d:%d:%d\n", t.hours, t.minutes, t.seconds);
	return 0;
}

