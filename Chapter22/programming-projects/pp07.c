/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 22 programming project 7

   Of the many techniques for compressing the contents of a file, one of the
   simplest and fastest is known as run-length encoding. This technique compresses
   a file by replacing sequences of identical bytes by a pair of bytes: A repetition
   count followed by a byte to be repeated. For example, suppose that the file to
   be compressed begins wih the followin sequence of bytes:

   46 6F 6F 20 62 61 72 21 21 21 20 20 20 20

   The compressed file will contain the following bytes:

   01 46 02 6F 01 20 01 62 01 61 01 72 03 21 05 20

   (a) Write a program named compress_file that uses run-length encoding to compress
       a file.

   (b) Write a program named uncompress_file that reverses the compression performed
       by the compress_file program.

       Solution is written as two functions, uncomment the calls in main. 
       Could be neater, improvements but it works.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char input_buffer[5000];
void compress(char *name);
void uncompress(char *name);

int main(int argc, char *argv[]){
	//compress(argv[1]);
	uncompress(argv[1]);
	return 0;
}

void uncompress(char *name){
	FILE *fp;
	// Attempt to open file
	if((fp = fopen(name, "r")) == NULL){
		printf("Error opening %s\n", name);
		exit(EXIT_FAILURE);
	}

 	fseek(fp, 0L, SEEK_END);
	int num = ftell(fp);
	rewind(fp);
	char *compressed_buf = malloc(num * sizeof(char));
	fread(compressed_buf, sizeof(char), num, fp);

	printf("\nUncompressed\n");
	printf("------------\n");
	int i = 0, multiplier = 0, x = 0;
	for(i = 0; i < num; i++){
			// Even numbers
		if(i % 2 == 0){
			multiplier = atoi(&compressed_buf[i]);
		} else {
			while(x++ < multiplier)
				putc(compressed_buf[i], stdout);
		}
		x = 0;
	}
}

void compress(char *name){
	FILE *fp;
	int num_characters = 0;

	// Open file for reading
	fp = fopen(name, "r");
	// Count the number of characters read into the input buffer, from the file.
	num_characters = fread(input_buffer, sizeof(char), sizeof(input_buffer) / sizeof(input_buffer[0]), fp);
	// Keep enough memory for storing the compressed file. According to the book the file size
	// can be as much as *2 of the original depending on conditions.
	char *output_buffer = malloc(num_characters * 2);

	// Print the contents of the uncompressed file
	printf("Original File\n");
	printf("-------------\n");
	printf("%s\n", input_buffer);

	// Loop through the uncompressed file buffer.
	int i = 0, num_of_repetitions = 1, y = 0;
	for(i = 0; i < num_characters;){
		// Count how many repeats there are of the current character i in the input buffer
		while(input_buffer[i + num_of_repetitions] == input_buffer[i]){
			num_of_repetitions++;
		}
		// Add the number of repeats to the buffer index, and skip that many

		i += num_of_repetitions ;
		output_buffer[y++] = num_of_repetitions + '0';
	        output_buffer[y++] = input_buffer[i - 1];
		num_of_repetitions = 1;
	}

	printf("Compressed File\n");
	printf("---------------\n");
	printf("%s\n", output_buffer);

	char *outfname = malloc((sizeof(name) / sizeof(name[0])) + sizeof(".rle"));

	strcat(outfname, name);
	strcat(outfname, ".rle");
	strcat(outfname, "\0");
	fp = fopen(outfname, "wb");
	printf("%s\n", outfname);
	fwrite(output_buffer, sizeof(output_buffer[0]), y, fp);
}
