/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 22, exercise 14

   (a) Write your own version of the fgets function. Make it behave as much
       like the real fgets function as possible, in particular, make sure
       it has the proper return value.

   (b) Write your own version of fputs. 
*/

#include <stdio.h>
char *a_fgets(char *s, int size, FILE *stream);
int b_fputs(const char *s, FILE *stream);

int main(void){
	char output[30];
	FILE *fp = fopen("output.txt", "w");
	a_fgets(output, 25, stdin);
	printf("a_fgets from stdin: %s\n", output);
	b_fputs("Hakunamatata", fp);
	fclose(fp);
	fp = fopen("output.txt", "r");
	a_fgets(output, 100, fp);
	printf("\n%s\n", output);
	fcloes(fp);
	return 0;
}

// Part A
char *a_fgets(char *s, int size, FILE *stream){
	int i = 0,  ch;
	// Get characters until EOF or reach size
	while((ch = getc(stream)) != EOF && i < size){
		// fgets will stop after reading a new line, it's stored
		// in the buffer too
		if(ch == '\n'){
			s[i++] = '\n';
			break;
		} else {
			// Store character in the buffer
			s[i++] = ch;
		}
	}
	// Add terminating byte
	s[i] = '\0';
	// Return pointer to buffer
	return s;
}

int b_fputs(const char *s, FILE *stream){
	char ch;
	// Read until end of string
	while(*s != '\0'){
		// put character to stream
		if((ch = putc(*s, stream) == EOF))
			return EOF;
		*s++;
	}
	return 1;
}
