/* Author: Ashley K. Smit
 * Solution to "C Programming A Modern Approach" chapter 7, programming project 5
 * In the SCRABBLE Crossword Game, playrs form words using small tiles, each containing a letter and a face value. The face value varies from one letter to another
 * based on the tiles rarity. Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ. Write a program that computers the value of a
 * word by summing the values of its letters.
 */

#include <stdio.h>
#include <ctype.h>

int main(){
	char input;
	unsigned short int score = 0;

	printf("\nEnter a word: ");

	do{
		input = getchar();

		switch(toupper(input)){
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
			       score = score + 1;
			       break;
			case 'D': case 'G':
			       score = score + 2;
			       break;
			case 'B': case 'C': case 'M': case 'P':
			       score = score + 3;
			       break;
			case 'F': case 'H': case 'V': case 'W': case 'Y': 
			       score = score + 4;
			       break;
			case 'K':
			       score = score + 5;
			       break;
			case 'J': case 'X':
			       score = score + 8;
			       break;
			case 'Q': case 'Z':
			       score = score + 10;
			       break;
			default:
			       break;
		}
		

	} while (input != '\n');

	printf("Scrabble value: %d\n", score);
	return 0;
}
