/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, exercise 11
 *
 * Write a program fragment that delcares an 8 x 8 char array named 
 * draughts_board (British spelling of checkers) and then uses a loop
 * to store the following data into the array (One character per array element);
 *
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 */ 
 
#include <stdio.h>
int main(){
	char draughts_board[8][8] = {};
	int i = 0, j = 0;

	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			if((i + j) % 2 == 0){
				draughts_board[i][j] = 'B';
				printf("%c ", draughts_board[i][j]); 
			} else {
				draughts_board[i][j] = 'R';
				printf("%c ", draughts_board[i][j]); 
			}
		}
		printf("\n");
	}

	
	return 0;
}
