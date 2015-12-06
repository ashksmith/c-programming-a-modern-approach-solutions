/* Author: Ashley K. Smith 
 * Solution to "C Programming: A modern approach" chapter 3, programming project 3
*/

#include <stdio.h>

int main(void){
	int gsiPrefix, groupID, publisherCode, itemNo, checkNo;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsiPrefix, &groupID, &publisherCode, &itemNo, &checkNo);
	printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gsiPrefix, groupID, publisherCode, itemNo, checkNo);

	return 0;
}
