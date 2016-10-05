/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, programming project 3
 *
 * Modify programming project 9 from chapter 8 so that it includes the following
 * instructions:
 *
 * void generate_random_walk(char walk[10][10]);
 * void print_array(char walk[10][10]);
 *
 * main first calls generate_random_walk, which initializes the array to contain
 * '.' characters and then replaces some of these characters by the letters
 * A through Z, as described in the original project, main then calls print_array
 * to display the array on the screen.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void){
	char map[10][10];
	generate_random_walk(map);
	print_array(map);
	return 0;
}

void generate_random_walk(char walk[10][10]){
		int i, n, randNum, row = 0, col = 0;
	time_t t;

	//firstLetter = A
	char letter = 65;

	//set all elements to '.'
	for(i = 0; i < 10; i++){
		for(n = 0; n < 10; n++){
			walk[i][n] = '.';
		}
	}
	//Set A to the starting location
	walk[row][col] = letter;
	//Increment to B, as its the first letter to be placed
	letter++;

	//while letter < 90 (Z in ascii)
	srand((unsigned) time(&t));
	while(letter <= 90){
		randNum = rand() % 4;
		switch(randNum){
			case 0: //up, check if the up move will go out of bounds and hit a .
				if(((row - 1) >= 0) && (walk[row - 1][col]) == '.'){
					row = row - 1;
					walk[row][col] = letter;
					letter++;
					break;
				}
			case 1: //right
				if(((col + 1) <= 9) && (walk[row][col + 1]) == '.'){
					col = col + 1;
					walk[row][col] = letter;
					letter++;
					break;
				}
			case 2: //down
				if(((row + 1) <= 9) && (walk[row + 1][col]) == '.'){
					row = row + 1;
					walk[row][col] = letter;
					letter++;
					break;
				}
			case 3: //left
				if(((col - 1) >= 0) && (walk[row][col - 1]) == '.'){
					col = col - 1;
					walk[row][col] = letter;
					letter++;
					break;
				}
		}
	}
}


void print_array(char walk[10][10]){
	int i, n;
	for(i = 0; i <= 9; i++){
		for(n = 0; n <= 9; n++){
			printf(" %c ", walk[i][n]);
		}
		printf("\n");
	}
}/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, programming project 2
 *
 * Modify programming project 9 from chapter 8 so that it includes the following
 * instructions:
 *
 * void generate_random_walk(char walk[10][10]);
 * void print_array(char walk[10][10]);
 *
 * main first calls generate_random_walk, which initializes the array to contain
 * '.' characters and then replaces some of these characters by the letters
 * A through Z, as described in the original project, main then calls print_array
 * to display the array on the screen.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void){
	char map[10][10];
	generate_random_walk(map);
	print_array(map);
	return 0;
}

void generate_random_walk(char walk[10][10]){
		int i, n, randNum, row = 0, col = 0;
	time_t t;

	//firstLetter = A
	char letter = 65;

	//set all elements to '.'
	for(i = 0; i < 10; i++){
		for(n = 0; n < 10; n++){
			walk[i][n] = '.';
		}
	}
	//Set A to the starting location
	walk[row][col] = letter;
	//Increment to B, as its the first letter to be placed
	letter++;

	//while letter < 90 (Z in ascii)
	srand((unsigned) time(&t));
	while(letter <= 90){
		randNum = rand() % 4;
		switch(randNum){
			case 0: //up, check if the up move will go out of bounds and hit a .
				if(((row - 1) >= 0) && (walk[row - 1][col]) == '.'){
					row = row - 1;
					walk[row][col] = letter;
					letter++;
					break;
				}
			case 1: //right
				if(((col + 1) <= 9) && (walk[row][col + 1]) == '.'){
					col = col + 1;
					walk[row][col] = letter;
					letter++;
					break;
				}
			case 2: //down
				if(((row + 1) <= 9) && (walk[row + 1][col]) == '.'){
					row = row + 1;
					walk[row][col] = letter;
					letter++;
					break;
				}
			case 3: //left
				if(((col - 1) >= 0) && (walk[row][col - 1]) == '.'){
					col = col - 1;
					walk[row][col] = letter;
					letter++;
					break;
				}
		}
	}
}


void print_array(char walk[10][10]){
	int i, n;
	for(i = 0; i <= 9; i++){
		for(n = 0; n <= 9; n++){
			printf(" %c ", walk[i][n]);
		}
		printf("\n");
	}
}
