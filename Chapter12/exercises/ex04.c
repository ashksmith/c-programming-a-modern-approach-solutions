/* Author: Ashley K. Smith (https://github.com/ashksmith
 *
 * Rewrite the make_empty, is_empty and is_full functions of section 10.2
 * to use pointer variable top_ptr instead of integer variable top.
 */

#include <stdbool.h>
#include <stdio.h>
#define STACK_SIZE 100
int contents[STACK_SIZE];
int *top = &contents[0];

void make_empty(void){
	top = &contents[0];
}

bool is_empty(void){
	return top == &contents[0];
}

bool is_full(void){
	return top == &contents[STACK_SIZE];
}

void push(int i){
	if(is_full())
		//stack_overflow();
		printf("full\n");
	else
		*top++ = i;
}

int pop(void){
	if(is_empty())
		//stack_underflow()
		printf("empty\n");
	else
		return *--top;
}

int main(void){

	return 0;
}
