/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 12 programming project 4
 *
 * Simplify programming project 2(b) by taking advantage of the fact an array name
 * may be used as a pointer.
 */
 
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 100

int read_message(char []);
bool is_palindrome_pointer(char [], int);

int main(void){
	char a[N];
	int msg_len = read_message(a);

	
	if(is_palindrome_pointer(a, msg_len) == true){
		printf("is palindrome");
	} else {
		printf("is not a palindrome");
	}

	printf("\n");
	return 0;
}
/* Reads a message from stdi to parameter a
   Returns the number of alphabet characters entered. */
int read_message(char a[]){
	int i = 0;
	char ch;
	for(i = 0; i < N && (ch = getchar()) != '\n';){
		if(isalpha(ch) != 0){
			a[i] = ch;
			i++;
		}
	}
	return i;
}

/* Tests if parameter a is a palindrome, parameter n is the length of
   a to be tested. Returns true or false. */
bool is_palindrome_pointer(char a[], int n){
	int i = 0;
	n--;
	
	while(a + i < a + n)
		if(*(a + i++) != *(a + n--))
			return false;
		
	return true;
}
