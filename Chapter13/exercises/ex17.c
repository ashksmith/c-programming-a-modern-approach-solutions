/* Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 14, exercise 17

Write the following function:
	bool test_extension(const char *file_name, const char *extension);

file_name points to a string containing a file name. the function should return true if the file's
extension matches the string pointed to by extension.
*/ 

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool test_extension(const char *file_name, const char *extension){
	while (*file_name++ != '.');

	if(strlen(file_name) != strlen(extension)) // First check if extensions are the same length.
		return false;

	while(*file_name)
		if(toupper(*file_name++) != toupper(*extension++)) // check each char of extension
			return false;

	return true; // if all is well return true
}

int main(void){
	char *name = "massive_source_file.cPp";
	char *ext = "cpp";

	printf("%s\n", test_extension(name, ext) ? "True" : "False");

	return 0;
}
