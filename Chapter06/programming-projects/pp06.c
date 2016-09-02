/* Author: Ashley K. Smith
 * Solution to chapter 6, programming project 6
 */

#include <stdio.h>
int main(){
	int n, counter = 0, tmp, rmndr;
	scanf("%d", &n);
	printf("\n");
	do{
		counter+=1;
		tmp = counter * counter;

		//test even square
		rmndr = tmp % 2;
		if(rmndr == 0){
			printf("%d\n", tmp);
		}	
	} while (tmp < n);
	printf("\n");
	return 0;
}
