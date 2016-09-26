/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 13
 *
 * Write the following function, which evaluates a chess position.
 *
 * int  evaluate_position(char board[8] [8]);
 *
 * board represents a configuration of peices on a chessboard where the letters K, Q, R, B, N
 * and P represent white pieces. The letters k, q, r, b, n, and q represent black.
 *
 * evaluate_positio should sum the values of the white peices and black and return the
 * difference between the two numbers. This value will be positive if white has
 * an advantage and negative if black has a advantage.
 */

#include <stdio.h>


int evaluate_position(char board[8][8]);

int main(){
	char current_board[8][8]  = {{'R', 'B', 'N', 'K', 'Q', 'N', 'B', 'R'},
	     			     {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
				     {'0', '0', '0', '0', '0', '0', '0', '0'},
				     {'0', '0', '0', '0', '0', '0', '0', '0'},
				     {'0', '0', '0', '0', '0', '0', '0', '0'},
				     {'0', '0', '0', '0', '0', '0', '0', '0'},
				     {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
				     {'r', 'b', 'n', 'q', 'k', 'n', 'b', 'r'}};
	printf("evaluate_position test. Expected 0, actual: %d\n", evaluate_position(current_board));

	char another_board[8][8] = {{'0', '0', '0', '0', '0', '0', '0', '0'},
        		      	    {'0', 'B', '0', '0', '0', '0', '0', 'r'},
		                    {'0', '0', '0', '0', '0', '0', '0', '0'},
			            {'0', '0', '0', 'Q', 'K', '0', '0', '0'},
			            {'0', '0', '0', '0', 'P', 'P', '0', '0'},
		                    {'0', '0', '0', '0', '0', 'p', 'p', '0'},
		                    {'0', '0', '0', 'b', '0', '0', '0', '0'},
		                    {'R', '0', '0', 'n', 'k', '0', '0', '0'}};
	printf("evaluate_position test. Expected 6, actual: %d\n", evaluate_position(another_board));
}

int evaluate_position(char board[8][8]){
	int i = 0, n = 0;
	int black_score = 0, white_score = 0;

	for(i = 0; i < 8; i++){
		for(n = 0; n < 8; n++){
			switch(board[i][n]){
				//White scores
				case 'Q': white_score += 9;
					  break;
				case 'R': white_score += 5;
					  break;
				case 'B': case 'N': white_score += 3;
					  break;
				case 'P': white_score += 1;
					  break;
				//Black scores
				case 'q': black_score += 9;
					  break;
				case 'r': black_score += 5;
					  break;
				case 'b': case 'n': black_score += 3;
					  break;
				case 'p': black_score += 1;
					  break;
			}
		}
	} //end of main for loop
	return white_score - black_score;
}
