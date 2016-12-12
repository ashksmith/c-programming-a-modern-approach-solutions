/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 12 programming project 5
 *
 * Modify Progamming Project 14 from Chapter 8 so that it uses a pointer instead of an
 * integer to keep track of the current position in the array that contains the sentence.
 *
 * Chapter 8, programming project 14:
 * Write a program that reverses the words in a sentence.
 */

#include <stdio.h>
#define N 200

int main(void){
	char sentence[N], *p, *prev_place, term_char, ch;
	int sentence_len, i = 0;

	while((ch = getchar()) != '\n'){
		//test for terminating character.
		if(ch == '.' || ch == '?' || ch == '!'){
			term_char = ch;
			break;
		} else {
			sentence[sentence_len] = ch;
			sentence_len++;
		}
	}
	printf("Reversed: ");

	for(p = &sentence[sentence_len - 1], prev_place = p; p >= sentence; p--){
		//found the start of a word.
		if(*p == ' '){
			while(p < prev_place){
				printf("%c", *p);
				//the number of places from the end of the array
				i++;
				p++;
			}
		}


	}
	printf("\nNon: ");


	//print sentence
	for(i = 0; i < sentence_len; i++){
		putchar(sentence[i]);
	}

	printf("\n");
	return 0;
}


