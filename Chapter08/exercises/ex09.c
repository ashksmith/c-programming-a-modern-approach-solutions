/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, exercise 9
 *
 * Write a declaration for a two-dimensional array named temperature_readings
 * that stores one month of hourly temperature readings. For simplicity assume
 * that a month has 30 days. The rows of the array should represent days of the month
 * The columns should represent hours of the day
 *
 * Write a program for theabove that computers average temperature for the month
 */ 
 
#include <stdio.h>

int main(){
	int i = 0, n = 0; 
	float dayAverage = 0.0f, monthAverage = 0.0f;
	
	//sample data for 3 days. 
	int temperature_readings[30][24] = {{9, 12, 13, 12, 14, 12, 12, 13, 12, 14, 15, 17, 16, 15, 18, 19, 16, 15, 13, 10, 9, 8, 8, 7},
					    {9, 13, 14, 15, 16, 17, 18, 19, 19, 19, 18, 17, 16, 15, 14, 14, 14, 12, 11, 10, 9, 8, 8, 7},
  					    {11, 12, 13, 14, 15, 15, 15, 15, 16, 16, 15, 15, 15, 15, 15, 14, 14, 13, 13, 10, 9, 8, 8, 7}};	

	//loop days
	for(i = 0;  i < 30; i++){
		//loop hours
		for(n = 0; n < 24; n++)
			dayAverage = dayAverage + temperature_readings[i][n];
		//calculate day average, and sum with monthly average so far.
		monthAverage = monthAverage + (dayAverage / 24);
		//reset day average
		dayAverage = 0.0f;	
	}

	//calculate monthly average based on the averages of the test figures entered. (3 days worth). .
	printf("Monthly average (3 days): %0.1f\n", monthAverage / 3);

	return 0;
}	
