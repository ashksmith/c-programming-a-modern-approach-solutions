/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, programming project 4
*/

#include <stdio.h>
int main(void){
	int windSpeed;
	printf("Enter a wind speed(knots) :");
	scanf("%d", &windSpeed);
	
	printf("Speed(knots)\tDescription\n");

	if (windSpeed < 1)
		printf("%d\t\tCalm\n", windSpeed);
	else if (windSpeed >= 1 && windSpeed <= 3)
		printf("%d\t\tLight Air\n", windSpeed);	
	else if (windSpeed >= 4 && windSpeed <= 27)
		printf("%d\t\tBreeze\n", windSpeed);
	else if (windSpeed >= 28 && windSpeed <= 47)	
		printf("%d\t\tGale\n", windSpeed);
	else if (windSpeed >= 48 && windSpeed <= 63)
		printf("%d\t\tStorm\n", windSpeed);
	else if (windSpeed > 63) 
		printf("%d\t\tHurricane\n", windSpeed);

	return 0;
}

