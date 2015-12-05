/* Author: Ashley K. Smith 
 * Solution to "C Programming: A modern approach" chapter 3, programming project 1
*/

#include <stdio.h>

int main(void){
	int day, month, year;
	printf("Enter a date (mm/dd/yyyy)");
	scanf("%d/%d/%d%", &day, &month, &year);
	printf("You entered the date %d%d%d", year, month, day);
	printf("\n");
	return 0;
}
