/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 19, programming project 1

   Modify programming project 1 from chapter 10 so that it uses the stack ADT
   described in section 19.4. You may use any implementations of the ADT described
   in that section
*/

#include "stack.h"

struct stack_type {
	char contents[STACK_SIZE];
	int top;
};

//void make_empty(void){
//	top = 0;
//}

Stack create(void){
	Stack s = malloc(sizeof(struct stack_type));
	if(s == NULL)
		exit(EXIT_FAILURE);
	s->top = 0;
	return s;
}

bool is_empty(Stack s){
	return s->top == 0;
}

bool is_full(Stack s){
	printf("top: %d\n", s->top);
	if(s->top == STACK_SIZE)
		return true;
	return false;
}

void push(Stack s, char ch){
	if(is_full(s))
		stack_overflow();
	else
		s->contents[s->top++] = ch;
}

char peek(Stack s){
	return s->contents[s->top - 1];
}

char pop(Stack s){
	if(is_empty(s))
		stack_underflow();
	else
		return s->contents[--s->top];
}

int stack_underflow(){
	printf("Stack underflow\n");
	exit(EXIT_FAILURE);
}

int stack_overflow(){
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}
