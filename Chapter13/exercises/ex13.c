/* Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 13, exercise 13

Write the following function:
	void build_index_url(const char *domain, char *index_url);

Domain points to a string containing an internet domain, such as "knking.com".
This function should add "http://www." to the beginning, and "/index.html"
to the end.
*/
#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url){
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
}

int main(void){
	char complete_url[300];
	build_index_url("knking.com", complete_url);
	printf("%s\n", complete_url);
	return 0;
}
