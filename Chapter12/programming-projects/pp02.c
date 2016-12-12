/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 12 programming project 2
 *
 * (a) Write a program that reads a message, then checks whether it's a palindrome.
 *     Ignore all characters that aren't letters. Use integer variables to keep
 *     track of the positions in the array.
 *
 * (b) Revise the program to use pointers instead of integers to keep track of the
 *     position in the array.
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 100

int read_message(char []);
bool is_palindrome(char [], int);
bool is_palindrome_pointer(char [], int);

int main(void){
	char a[N];
	int msg_len = read_message(a);

	if(is_palindrome(a, msg_len) == true){
		printf("is palindrome");
	} else {
		printf("is not a palindrome");
	}

	printf("\n");

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
bool is_palindrome(char a[], int n){
	 int i;
	 for(i = 0, --n; i < n; i++, n--)
		if(a[i] != a[n])
			return false;
	
	 return true;
}

bool is_palindrome_pointer(char a[], int n){
	char *p, *p2;
	/* Sets two pointers of char to the first and last (zero counted)
	 * array elements of array a. */
	for(p = a, p2 = &a[n - 1]; p < a + n; p++, p2--)
		/* If the values do not match, return false*/
		if(*p != *p2)
			return false;
	
	return true;
}


