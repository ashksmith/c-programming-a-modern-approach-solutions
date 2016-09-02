/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, programming project 3
*/

#include <stdio.h>
int main(void){
	int noOfShares;
	float commission, value, sharePrice, rivalPrice;
	printf("Enter the number of shares: ");
	scanf("%d", &noOfShares);

	while(

	printf("Enter the share price: ");
	scanf("%f", &sharePrice);
	
	value = noOfShares * sharePrice;
	
	if(noOfShares < 2000.00f)
		rivalPrice = 33.00f + 0.03f * noOfShares;
	else
		rivalPrice = 33.00f + 0.02f * noOfShares;

	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if(value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if(value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if(value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if(value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.055f + .0009f * value;

	if(commission < 39.00f)
		commission = 39.00f;
	
	printf("Commission: $%.2f\n", commission);
	printf("Rival price: $%.2f\n", rivalPrice);	

	return 0;
}

