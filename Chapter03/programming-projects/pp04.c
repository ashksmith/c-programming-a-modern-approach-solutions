/* Author: Ashley K. Smith 
 * Solution to "C Programming: A modern approach" chapter 3, programming project 4
*/

#include <stdio.h>

int main(void){
	int areaCode, firstHalf, secondHalf;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%3d) %3d-%4d", &areaCode, &firstHalf, &secondHalf);
	printf("You entered %d.%d.%d\n", areaCode, firstHalf, secondHalf);
	
	return 0;
}
