/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 7, programming project 13.
 *
 * Write a program that calculates the average word length for a sentence. For 
 * simplicity, your program should consider a punctuation mark to be part of the
 * word to which it is attached. Display the average word length to one decimal place..
 */ 

#include <stdio.h>
#include <ctype.h>

int main(){
	//total number of words is 1 as number of words in a sentence is found
	//by number of spaces entered + 1. 
	float result = 0.0f, wordCount = 1.0f, charCount = 0.0f;
	char input;

	while((input = getchar()) != '\n'){
		if(isalpha(input) || ispunct(input))
			charCount += 1;

		if(input == ' ')
			wordCount += 1;
	}

	printf("\n%.1f\n", charCount / wordCount);
	return 0;
}
