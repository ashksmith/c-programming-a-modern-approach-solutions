/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 11, exercise 5.
 *
 * Write the following function:
 *
 * void split(long total_sec, int *hr, int *min, int *sec);
 *
 * total_sec is a time represented as the number of seconds since midnight. hr, min
 * and sec are pointers to variables in which the function will store the equivalent
 * time in hours, minutes and seconds.
 */

#include <stdio.h>

void split(long total_sec, int *hr, int *min, int *sec);

int main(void){
	int hr = 0, min = 0, sec = 0;
	split(4050, &hr, &min, &sec);
	printf("4050 seconds is 1hr, 7min, 30 seconds. Test: %d:%d:%d\n", hr, min, sec);
	return 0;
}

void split(long total_sec, int *hr, int *min, int *sec){
	*min = total_sec / 60;
	*sec = total_sec % 60;
	*hr = *min / 60;
	*min = *min % 60;
}
