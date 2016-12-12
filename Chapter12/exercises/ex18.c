/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 18
 *
 * Write the evaluate_position function described in exercise 13 of chapter 9.
 * Use pointer arithmetic to visit array elements. Use a single lop instead
 * of nested loops.
 */

#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void){
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



	return 0;
}

int evaluate_position(char board[8][8]){
	char *p;
	int white_score = 0, black_score = 0;
	for(p = &board[0][0]; p < &board[7][8]; p++){
		switch(*p){
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

	return white_score - black_score;
}
