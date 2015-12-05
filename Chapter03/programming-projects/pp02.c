/* Author: Ashley K. Smith 
 * Solution to "C Programming: A modern approach" chapter 3, programming project 2
*/

#include <stdio.h>

int main(void){
	int itemNumber, day, month, year;
	float unitPrice;
	printf("Enter item number: ");
	scanf("%d", &itemNumber);
	printf("Enter unit price: ");
	scanf("%f", &unitPrice);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);	
	printf("\n");

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d", itemNumber);
	printf("\t\t$  %6g", unitPrice); 
	printf("\t\t%-.2d/%-.2d/%-.4d", month, day, year);
	printf("\n");
	return 0;	
}
