/* Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 13, exercise 12

Write the following function:

void get_extension(const char *file_name, cat *extension);

file_name points to a string containing a file name. The function should store
the extension only, for example if "memo.txt" is passed, the function should
store "txt".
*/

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension){
	while(*file_name != '\0'){ //check
		if(*file_name++ == '.'){
			strcpy(extension, file_name);
			return;
		}
	}
	strcpy(extension, "");
}

int main(void){
	char *str = "testfile.txt";
	char ext[20];
	get_extension(str, ext);
	printf("Filename: %s, extension: %s\n", str, ext);

	return 0;
}
