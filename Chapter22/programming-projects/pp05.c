/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 22 programming project 5
   
   The xor.c program of section 20.1 refuses to encrypt bits that, in the original
   or encrypted form, are control characters. We can now remove this restriction.
   Modify the program so that the names of the input and output files are command
   line arguments. Open both files in binary mode, and remove the test that checks
   whether the original and encrypted chracters are printing characters.
*/

// Original here: http://knking.com/books/c2/programs/xor.c

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[]){
	// Check the number of entered arguments by checing arg count
	if(argc != 3){
		printf("Error calling program, correct usage: ./a.out input_file output_file");
		exit(EXIT_FAILURE);
	}

	// Test both files that they are open
	FILE *input_file, *output_file;
	if((input_file = fopen(argv[1], "rb")) == NULL){
		printf("Unable to open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	} 

	if((output_file = fopen(argv[2], "wb")) == NULL){
		printf("Unable to open %s\n", argv[2]);
	}
	
	int orig_char, new_char;
	while((orig_char = fgetc(input_file)) != EOF){
		new_char = orig_char ^ KEY;
		fputc(new_char, output_file);
	}

	fclose(input_file);
	fclose(output_file);
	return 0;
}
