/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 22 programming project 4
  
   (a) Write a program that counts the number of characters in a text file.
   (b) Write a program that counts the number of words in a text file.
   (c) Write a program that counds the number of lines in a text file.

   I'll solve all 3 in one.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	FILE *fp;
	char ch;
	if(argc != 2){
		printf("Incorrect usage, correct usage: ./a.out file");
		exit(EXIT_FAILURE);
	}	

	if((fp = fopen(argv[1], "r")) == NULL){
		printf("Cannot open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	int i, num_lines = 0, num_words = 0, num_characters = 0;
	while((ch = (char)fgetc(fp)) != EOF){
		if(isalpha(ch))
			num_characters++;
		
		if(ch == '\n')
			num_lines++;
	
		if(ch == ' ')
			num_words++;				
	}

	printf("Number of characters: %d\nNumber of Words: %d\nNumber of lines: %d\n",
			num_characters, num_words, num_lines);

	return 0;
}
