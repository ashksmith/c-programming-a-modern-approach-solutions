/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 22 programming project 6

   Write a program that displays the contents of a file as bytes and as characters.
   Have the user specifiy the file name on the command line. Each line should
   show 10 bytes from the file as hexadecimal numbers and as characters.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	printf("Offset              Bytes              characters\n");
	printf("------  -----------------------------  ----------\n");

	FILE *fp; int ch;
	if((fp = fopen(argv[1], "rb")) == NULL){
		printf("Has been an error\n");
		exit(EXIT_FAILURE);
	}
	
	int x = 10, i = 0, y = 0;
	char *bytes[29], *characters[10];
	while((ch = (char)fgetc(fp)) != EOF){
		while(ftell(fp) < x){
			printf("%6d  %-29s  %-10s", x - 10, "", "");	
		}
		x *= 10;
	}
		




	return 0;
}
