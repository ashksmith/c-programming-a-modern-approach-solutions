/* Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 14, exercise 18

Write the following function:
	Void remove_filename(char *url);

url points to a string containing a URL that ends with a file name, such as
http://knking.com/index.html"). The function should modify the string
by removing the file name and preceding slash.
*/
#include <stdio.h>
#include <string.h>

void remove_filename(char *url){
	while(*url++); // loop until pointer is at the end of the string
	while(*--url != '/'); // loop back until the last /
	*url = '\0'; // cut the end of the string
}

int main(void){
	char url[] = "www.ashleyksmith.com/index.html";
	remove_filename(url);
	printf("%s\n", url);
	return 0;
}
