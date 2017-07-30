/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 5

   Write the following functions, assuming that the date structure contains three members:
   day, month, year (all of type int). 

   (a) int day_of_year(struct date d);
	Returns the day of the year that corresponds to the date d.

   (b) int compare_date (struct date d1, struct date d2);
	Returns -1 if d1 is an earlier date than d2 + 1 if d1 is a later date, and 0 if d1
	vand d2 are the same.
*/

#include <stdio.h>
typedef struct { int day, month, year; } date; 
// The number of days in each month
int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int day_of_year(date d){
	int i, total_days = 0;
	for(i = 0; i < d.month - 1; i++)
		total_days += months[i];

	return total_days + d.day;
}

int compare_date(date d1, date d2){
	if(d1.year < d2.year)
		return -1;
	else if(d1.year > d2.year) 
		return 1;
	else if(d1. year == d2.year){
		if(day_of_year(d1) < day_of_year(d2))
			return -1;
		else if(day_of_year(d1) > day_of_year(d2))
			return 1;
		else if(d1.day == d2.day && d1.month == d2.month)
			return 0;
	}
}

int main(void){
	date d1 = {12, 5, 1991};
	date d2 = {12, 5, 1991};
	printf("Day of year: %d\n", day_of_year(d1));
	printf("d1 is earlier than d2, expect -1. Actual: %d\n", compare_date(d1, d2));
	return 0;
}

