/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 11


Q: The following table shows telephone area codes in the state of Georgia along with the largest city in each area:

Area Code	Major city
229		Albany
404		Atlanta
470		Atlanta
478		Macon
678		Atlanta
706 		Columbus
762		Columbus
770		Atlanta
912 		Savannah

Write a switch statement who controlling expression is the variable area_code. If the value of area_code is in the table, the switched statement will print the 
corresponding city name. Otherwise, the swwitch statrment will display "Area code not recognized". 
*/
#include <stdio.h>

int main(void){
	int areaCode;
	printf("Enter an area code: ");
	scanf("%d", &areaCode);
	
	switch (areaCode){
		case 229:
			printf("Albany\n");
			break;
		case 404:
			printf("Atlanta\n");
			break;
		//case 470, 478...etc
		default: 	
			printf("No area code reconigsed\n");
			break;
	}

	return 0;
}
