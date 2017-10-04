/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 22 programming project 2
 
   Write a program that converts all letters in a file to upper case. (Characters
   other than letters shouldn't be changed.) The program should obtain the file
   name from the command line and write its output to stdout.

*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	FILE *fp;
	int i = 0;

	// Check the number of arguments
	if (argc != 2) {
		printf("usage: ./a.out filename\n");
		exit(EXIT_FAILURE);
  	}
		
	// Check file pointer
	if((fp = fopen(argv[1], "r")) == NULL){
		printf("%s failed to open\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	// Seek to the end of file to find the length of the contents
	fseek(fp, 0L, SEEK_END);
	long fp_size = ftell(fp);
	
	// Set file position back to beginning
	rewind(fp);

	// Print the contents of the file. fgetc gets the current character
	// and moves the file position one byte foward.
	while(i++ < fp_size){
		printf("%c", fgetc(fp));
	}

	printf("\n\n");	

	// Reset the file position
	rewind(fp);
	i = 0;
	// Loop through again but make every character upper case
	while(i++ < fp_size){
		printf("%c", toupper(fgetc(fp)));
	}
}
