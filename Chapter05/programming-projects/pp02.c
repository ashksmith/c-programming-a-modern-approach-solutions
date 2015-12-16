/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, programming project 2
*/

#include <stdio.h>
int main(void){
	int hour, mins;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &mins);
	printf("Equivalent 12-hour time: ");	

	if((hour >= 12 && hour <= 23) && (mins >= 0 && mins <= 59)){
		hour = hour - 12;
		printf("%d:%d PM\n", hour, mins);
	} else if ((hour >= 00 && hour <= 11) && (mins >= 0 && mins <= 59)){
		printf("%d:%d AM\n", hour, mins);
	} else {
		printf("Invalid time, ensure format is hh:mm\n");
	}


	

	return 0;
}

