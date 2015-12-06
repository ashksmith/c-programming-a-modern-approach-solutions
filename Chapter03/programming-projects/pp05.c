/* Author: Ashley K. Smith 
 * Solution to "C Programming: A modern approach" chapter 3, programming project 5
*/

#include <stdio.h>

int main(void){
	int row1, one, two, three, four;
	int row2, yksi, kaksi, kolhme, nelja;
	int row3, ichi, ni, san, shi;
	int row4, uno, due, tre, quattro;
	
	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &yksi, &kaksi, &kolhme, &nelja, &ichi, &ni, &san, &shi, &uno, &due, &tre, &quattro);
	printf("%d %d %d %d\n", one, two, three, four);
	printf("%d %d %d %d\n", yksi, kaksi, kolhme, nelja);
	printf("%d %d %d %d\n", ichi, ni, san, shi);
	printf("%d %d %d %d\n", uno, due, tre, quattro);
		
	printf("\nRow sums: %d %d %d %d", one+two+three+four, yksi+kaksi+kolhme+nelja, ichi+ni+san+shi, uno+due+tre+quattro);
	printf("\nColumn sums: %d %d %d %d", one+yksi+ichi+uno, two+kaksi+ni+due, three+kolhme+san+tre, four+nelja+shi+quattro);	
	printf("\nDiagonal sums: %d %d\n", one+kaksi+san+quattro, uno+ni+kolhme+four);
	
	return 0;
}
