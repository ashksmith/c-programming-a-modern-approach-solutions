/* Author: Ashley K. Smith 
 * Solution to chapter 6, programming project 8
 */

#include <stdio.h>

int main(){
	int daysInMonth, startOfWeek, i;

	printf("\nEnter number of days in month: ");
	scanf("%d", &daysInMonth);
	printf("\nEnter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &startOfWeek);
	printf("\n");

	for(i = 1; i < startOfWeek; i++){
		printf("\t");
	}

	for(i = 1; i <= daysInMonth; i++){
		printf("%d\t", i);
		if((startOfWeek + i - 1) % 7 == 0){
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}

