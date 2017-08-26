#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

bool is_empty(Stack *s){
	if(s->top == 0)
		return true;
	return false;
}

bool is_full(Stack *s){
	if(s->top >= MAX_CONTENTS_SIZE)
		return true;
	return false;

}

void push(Stack *s, int i){
	if(is_full(s)){
		printf("Overflow\n");
		exit(EXIT_FAILURE);
	}
	s->top++;
	s->contents[s->top] = i;
}

int pop(Stack *s){
	if(is_empty(s) == true){
		printf("Underflow\n");
		exit(EXIT_FAILURE);
	}

	return s->contents[s->top--];
}

void empty_stack(Stack *s){
	if(is_empty(s))
		return;
	for(; s->top >= 0; s->top--)
		s->contents[s->top] = 0;
}
