/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, programming project 4
 *
 * Modify programming project 16 from chapter 8 so that it includes the following
 * instructions:
 *
 * void read_word(int counts[26]);
 * bool equal_array(int counts1[26], int count2[26]);
 *
 * main will call read_word twice, once for each of the two words entered by the
 * user. As it reads a word, read_word will use the letters in the word to update
 * the counts array, as described in the original project. (Main will declare two
 * arrays, one for each word. These will then call equal_array, passing it the two
 * arrays. equal_array will return true if the elements in the two arrays are
 * identical (indicating that the word are anagrams) and false otherwise.
 */

#include <stdio.h>
#include <stdbool.h> 

void read_word(int [26]);
bool equal_array(int [26], int [26]);

int main(void){
	char input;
	//initialise all counts as 0
	int word1[26] = {0}, word2[26] = {0}, i = 0;

	//Tally letters of first word.
	printf("Enter first word: ");
	read_word(word1);

	//Tally letters of second word
	printf("Enter second word: ");
	read_word(word2);

	//test if words are the same
	if(equal_array(word1, word2) == true){
		printf("The words are anagrams\n");
	} else if(equal_array(word1, word2) == false){
		printf("The words are not anagrams\n");
	}

	return 0;
}

void read_word(int counts[26]){
	int i;
	char input;
	for(i = 0; i < 26 && (input = getchar()) != '\n'; i++)
		if(isalpha(input))
			counts[toupper(input) - 65]++;
}

bool equal_array(int counts1[26], int counts2[26]){
	int i;
	for(i = 0; i < 26; i++){
		if(counts1[i] != counts2[i]){
			return false;
			break;
		}
	}
	return true;
}
