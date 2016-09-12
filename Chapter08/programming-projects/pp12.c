/* Author: Ashley K. Smith
 * Solution for "C Programming A Modern Approach" chapter 8, programming project 12
 *
 * Modify programming project 5 from chapter 7 so that the scrabble values of the letters are stored in an array. 
 * The array will have 26 elements, corresponding to the 26 letters of the alphabet. For example, element 0 of the array
 * will store 1 because the scabble value of the a letter is 1, element 1 of the array wil store 3 because the scarabble 
 * value of the letter b is 3, and so forth. As each character of the input word is read, the program will use
 * the array to determine the scrabble value of that character. The an array initialiser to set up the array.
*/

#include <stdio.h>
#include <ctype.h>

int main(){		       //A B C D E F G H I J K L M N O P Q  R S T U V W X Y Z
	char letterScores[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10}, input;
	unsigned short int score = 0;

	printf("Enter a word: ");
	while((input = getchar()) != '\n'){
		score += letterScores[toupper(input) - 65];
	}
	printf("Scrabble value: %d\n", score);


}
