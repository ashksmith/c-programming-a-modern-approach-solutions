#ifndef STACK_H
#define STACK_H

#define MAX_CONTENTS_SIZE 25

#include <stdbool.h>

typedef struct {
	int top;
	int contents[MAX_CONTENTS_SIZE];
} Stack;

void empty_stack(Stack *);
bool is_empty(Stack *);
bool is_full(Stack *);
void push(Stack *, int);
int pop(Stack *);


#endif
