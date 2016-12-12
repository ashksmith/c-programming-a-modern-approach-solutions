/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 11, exercise 7.
 *
 * Write the following function:
 *
 * void split_date(int day_of_year, int year, int *month, int *day);
 *
 * day_of_year is an integer between 1 and 366, specifying a particular day within
 * the year designated by year. month and day  point to variables within the
 * function in which the functon will store the equivalent month (1-12) and day
 * within that month (1-31).
 *
 */

#include <stdio.h>
void split_date(int day_of_year, int year, int *month, int *day);

int main(void){
	int month, day, year = 2024;
	split_date(98, year, &month, &day);
	printf("Day %d, in the year %d is %d,%d,%d\n", 29, 2024, day, month, year);
	return 0;
}

/* Return the year, month, day of a given day of year. IE 65 = 6th march
 * in a common year, 5th if on a leap year.*/
void split_date(int day_of_year, int year, int *month, int *day){
	//array that contains all the days in a month
	int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	//test if the year is a leap year.
	if((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)){
		months[1]++;
	}
	*month = 1;
	while(day_of_year > months[*month]){
		printf("month: %d\n", *month);
		day_of_year -= months[(*month)++];
	}
	*day = day_of_year;
}

