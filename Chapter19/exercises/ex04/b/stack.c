#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node {
	int item;
	struct node *next;
};

struct struct_type {
	struct node *top;
};

void push(Stack s, int i){
	printf("Pushing: %d\n", i);
	struct node *n = malloc(sizeof(struct node));
	n->item = i;
	n->next = s->top;
	s->top = n;
}

int pop(Stack s){
	if(is_empty(s) == true){
		printf("Stack underflow\n");
		exit(EXIT_FAILURE);
	}
	int i = s->top->item;
	s->top = s->top->next;
	printf("Popping: %d\n", i);
	return i;
}

bool is_empty(Stack s){
	if(s->top == NULL){
		printf("Stack is empty\n");
		return true;
	}
	return false;
}

Stack create(){
	Stack s;
	s = malloc(sizeof(struct struct_type));
	s->top = NULL;
	return s;
}
