/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12.4, pointers
 * and multi-dimensional arrays, exercise 13.
 *
 * Section 8.2 had a program fragment in which two nested for loops initialized the
 * array ident for use as an identity matrix. Rewrite this code, using a single
 * pointer to step through the array one element at a time.
 */

#include <stdio.h>

#define N 10

int main(void){
	double ident[N][N];
	double counter = N;
	double *p;

	//p = ident[0] will point at ident[0][0], it's also valid to write
	//p = &ident[0][0]. 
	//incrementing p will increment through columns. ident[0][1], p++, ident[0][2]
	//At the point where p reaches ident[0][N-1] the next increment will increment
	//the row to ident[1][0]. 
	for(p = ident[0]; p <= &ident[N-1][N-1]; p++){
		if(counter >= N){
			*p = 1;
			counter = 0;
		} else {
			*p = 0;
			counter++;
		}
	}

	//print the array
	int row, col;
	for(row = 0; row < N; row++){
		for(col = 0; col < N; col++){
			printf("%.0f ", ident[row][col]);
		}

		printf("\n");
	}

	return 0;
}






