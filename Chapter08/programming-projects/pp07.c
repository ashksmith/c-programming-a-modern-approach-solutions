/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, programming project 7
 *
 * Write a program that reads a 5x5 array of integers and then prints the row sums
 * and the column sums.
 */

#include <stdio.h>

int main(void){
	int array[5][5] = {0}, row = 0, col = 0, rowSum = 0, colSum = 0;

	for(row = 0; row < 5; row++){
		printf("Enter row %d: ", row + 1);
		scanf("%d %d %d %d %d", &array[row][0], &array[row][1], &array[row][2],
					&array[row][3], &array[row][4]);
	}
	
	printf("\nRow totals: ");
	for(row = 0; row < 5; row++){
		for(col = 0; col < 5; col++){
			rowSum += array[row][col];
		}	
		printf("%d ", rowSum);
		rowSum = 0;
	}
	
	printf("\nColumn totals: ");
	for(col = 0; col < 5; col++){
		for(row = 0; row < 5; row++){
			colSum += array[row][col];		
		}
		printf("%d ", colSum);
		colSum = 0;
	}
	printf("\n");
	return 0;
}

