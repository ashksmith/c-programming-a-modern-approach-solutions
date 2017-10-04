/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 23 programming project 3
   
   Write a program named fcat that "concatenates" any number of files by writing
   them to standard output, one after the other, with no break between files. For
   example the following command will display the files f1.c, f2.c and f3.c on the
   screen. 


   fcat f1.c f2.c f3.c

   fcat should issue an error message if any file can't be opened.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc < 2){
		printf("Wrong command, format: fcat file1 file2 ... filex");
		exit(EXIT_FAILURE);
	}

	FILE *fp;
	int i = 0;
	for(i = 1; i < argc; i++){
		if((fp = fopen(argv[i], "r")) == NULL){
			printf("%s cannot be opened", argv[i]);
			exit(EXIT_FAILURE);
		}
	}
	
	for(i = 1; i < argc; i++){
		// Set the file position to the end.
		fseek(fp, 0L, SEEK_END);
		// Get the size of the contents.
		long f_size = ftell(fp);
		// Reset file position
		rewind(fp);	
		int x = 0;
		printf("%d\n", f_size);	
		while(x++ < f_size){
			printf("%c", fgetc(fp));	
		}
	}
}	
 
