/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 13 programming project 1

 Write a program that finds the "smallest" and "largest" in a series of words. After the user enters the words,
 the program will determine which words would come first and last if the words were listed in dictionary order.
 The program must stop accepting input when the user enters a four-letter word. Assume that no word is more
 than 20 letters long.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN 20

void read_word(char str[], int n);

int main(void){
	char smallest_word[LEN + 1], largest_word[LEN + 1], current_word[LEN + 1];

	printf("Enter word: ");
	read_word(current_word, LEN);
	strcpy(smallest_word, current_word);
	strcpy(largest_word, current_word);

	while(strlen(current_word) != 4){
		printf("Enter word: ");
		read_word(current_word, LEN);

		if(strcmp(smallest_word, current_word) < 0)
			strcpy(smallest_word, current_word);
		if(strcmp(largest_word, current_word) > 0)
			strcpy(largest_word, current_word);
	}

	printf("Largest word: %s\n", largest_word);
	printf("Smallest word: %s\n", smallest_word);

	return 0;
}

void read_word(char str[], int n){
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		if(i < n)
			str[i++] = ch;
	}
	str[i] = '\0';
}
