/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, exercise 10
 *
 * Write a declaration for an 8 x 8 char array named chess_board. Include an initializer
 * that puts the following data into the array. (One character per array element):#
 *
 * r n b q k b n r
 * p p p p p p p p
 *   .   .   .   .
 * .   .   .   . 
 *   .   .   .   .
 * .   .   .   .
 * P P P P P P P P
 * R N B Q K B N R
 * 
 */ 
 
#include <stdio.h>

int main(){
	char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
				  {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
				  {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
				  {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
				  {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
				  {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
				  {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
				  {'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'}};

	
	return 0;
}
