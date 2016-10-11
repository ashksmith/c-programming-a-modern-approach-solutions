/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 10, programming project 1
 *
 * Modify the stack example of section 1.2 so that it stores characters instead
 * of integers. Next, add a main function that asks the user to enter a series of
 * parentheses and/or braces, then indicates whether or not they're properly
 * nested:
 *
 * Enter parentheses and/or braces: (() {} { () } )
 * Parentheses / braces are nested properly.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
int stack_underflow();
int stack_overflow();

int main(void){
	char ch;
	while((ch = getchar()) != '\n'){
		if(ch == '(' || ch == '{')
			push(ch);

		if(ch == '}' && pop() != '{'){
			printf("Braces / Parentheses not nested correctly\n");
			break;
		} else if(ch == ')' && pop() != '('){
			printf("Braces / Parentheses not nested correcntly\n");
			break;
		}

	}
	
	if(is_empty()){
		printf("Braces / Parentheses matched correctly\n");
	} else {
		printf("Braces / Parentheses did not match\n");
	}

	return 0;
}

void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(char ch){
	if(is_full())
		stack_overflow();
	else
		contents[top++] = ch;
}

char pop(void){
	if(is_empty())
		stack_underflow();
	else
		return contents[--top];
}

int stack_underflow(){
	printf("Stack underflow\n");
	exit(EXIT_FAILURE);
}

int stack_overflow(){
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}
