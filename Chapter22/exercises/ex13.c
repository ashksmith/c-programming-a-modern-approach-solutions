/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 22, exercise 13

   Write the following function:
   	
   	int line_length(const char *fileame, int n);

   The function should return the length of line n in the text file whose name is 
   filename. (Assuming that the first line in the file is line 1). If the line does
   not exist the function should reutnr 0.
*/
#include <stdio.h>

int line_length(const char *, int);

int main(void){
	int x, lineno = 3;
	x = line_length("example.txt", lineno);
	printf("Length of line %d:%d\n", lineno, x);	
	return 0;
}

int line_length(const char *filename, int n){
	FILE *fp = fopen(filename, "r");
	int i = 1, total = 0;
	char ch;
	while((ch = getc(fp)) != EOF){
		// Found the line we're looking for
		if(i == n){
			// Count characters in the line
			total++;
		}
		
		// Count lines
		if(ch == '\n')
			i++;	
	}

	if(total == 0)
		return 0;
	else 
		// Remove the new line character from the count
		return total - 1;
}


