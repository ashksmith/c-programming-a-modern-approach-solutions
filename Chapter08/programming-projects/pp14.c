/* Author: Ashley K. Smith
 * Solution for "C Programming A Modern Approach" chapter 8, programming project 14
 *
 * Write a program that reverses the words in a sentence. 
 * I'm sure this can be cleaner, I just don't want to spend anymore time working on this.
*/

#include <stdio.h>

int main(){
	int i = 0, n = 0;
	char sentence[250], input, terminator_char = '?', word_len = 0, sentence_len = 0;

	while((input = getchar()) != '\n'){
		if(input == '.' || input == '?' || input == '!'){
			terminator_char = input;
			break;
		} else {
			sentence[sentence_len] = input;
			sentence_len++;
		}
	}	

	//reverse through the array
	for(i = sentence_len; i >= 0; i--){
		n = i;

		//If a space is found or we reach the last element of the array
		//A word has been found. 
		//n is the index value of the current word, word_len is the length of that
		//word in order to loop back through sentence to print it.
		if(sentence[i] == ' ' || i == 0){
			n = n + 1;
			if(i == 0){
				n = i;
				word_len++;
			}
			//
			while(word_len > 0){
				putchar(sentence[n]);
				n++;
				word_len--;
			}
			//only prints a space between words
			if(i != 0)
				printf(" ");

		} else {
			word_len++;
		}
	}

	printf("%c\n", terminator_char);
	return 0;
}
