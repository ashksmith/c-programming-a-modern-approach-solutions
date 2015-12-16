/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, programming project 7
*/

#include <stdio.h>

int main(void){
	int yks, kaks, kol, nel, high, low; //Finnish and Estonian numbers, might aswell learn languages at the same time right?
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &yks, &kaks, &kol, &nel);
	high = yks;
	low = yks;

	if (kaks > high){
		high = kaks;
	} else if (kaks < low){
		low = kaks;
	}

	if (kol > high){
		high = kol;
	} else if (kol < low){
		low = kol;
	}

	if(nel > high){
		high = nel;
	} else if (nel < low){
		low = nel;
	}

	printf("Largest: %d\n", high);
	printf("Smallest: %d\n", low);

	return 0;
}

