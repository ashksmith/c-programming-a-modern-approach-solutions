/* Author: Ashley K. Smith
 * Solution for "C Programming A Modern Approach" chapter 8, programming project 16
 *
 * Write a program that tests whether two words are anagrams (Permutations of the same letters).
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
	char input;
	int word_count[26] = {0};
	int first_word_len = 0, second_word_len = 0, i = 0;


	//Tally letters of first word.
	printf("Enter first word: ");
	for(i = 0; i < 50 && (input = getchar()) != '\n'; i++){
		//Test to make sure input is alpha numeric
		if(isalpha(input)){
			//
			word_count[toupper(input) - 65]++;
		}
	}

	//Decrement letters of second word.
	printf("Enter second word: ");
	for(i = 0; i < 50 && (input = getchar()) != '\n'; i++){
		if(isalpha(input)){
			word_count[toupper(input) - 65]--;
		}
	}

	//Test word count, if all values are 0 words are considered to be the same
	for(i = 0; i < 26; i++){
		printf("\n%d", word_count[i]);
		if(word_count[i] != 0){
			printf("The words are not anagrams\n");
			break;
		} else if(i == 25){
			printf("The words are anagrams\n");
		}
	}

	return 0;
}
