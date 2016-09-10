/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, programming project 9
 *
 * Write a program that generates a "random walk" across a 10 x 10 array.
 * The array will contain charatcers (all '.' initially). The program must
 * randomly "walk" from each element to element, always going up, down, left or
 * right by one element. The elements visited by the program will be labeled
 * with the letter A through Z, in the order visited. 
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, n, randNum, row = 0, col = 0;
	time_t t;

	//firstLetter = A
	char map[10][10], letter = 65;
	
	//set all elements to '.'
	for(i = 0; i < sizeof(map) / sizeof(map[0]); i++){
		for(n = 0; n < sizeof(map) / sizeof(map[0]); n++){
			map[i][n] = '.';
		}
	}
	//Set A to the starting location
	map[row][col] = letter;
	//Increment to B, as its the first letter to be placed
	letter++;

	//while letter < 90 (Z in ascii)
	srand((unsigned) time(&t));
	while(letter <= 90){
		randNum = rand() % 4;		
		switch(randNum){
			case 0: //up, check if the up move will go out of bounds and hit a .
				if(((row - 1) >= 0) && (map[row - 1][col]) == '.'){
					row = row - 1;
					map[row][col] = letter;					
					letter++;
					break;	
				}
			case 1: //right
				if(((col + 1) <= 9) && (map[row][col + 1]) == '.'){
					col = col + 1;
					map[row][col] = letter;					
					letter++;
					break;		
				}
			case 2: //down
				if(((row + 1) <= 9) && (map[row + 1][col]) == '.'){
					row = row + 1;
					map[row][col] = letter;
					letter++;
					break;	
				} 
			case 3: //left
				if(((col - 1) >= 0) && (map[row][col - 1]) == '.'){
					col = col - 1;
					map[row][col] = letter;					
					letter++;
					break;
				}
		}
	}
	
	//print map/maze
	for(i = 0; i <= 9; i++){
		for(n = 0; n <= 9; n++){
			printf(" %c ", map[i][n]);
		}
		printf("\n");
	}
	
	printf("\n");
	return 0;
}

