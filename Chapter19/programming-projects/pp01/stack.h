#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef struct stack_type *Stack;

Stack create(void);
void make_empty(void);
bool is_empty(Stack);
bool is_full(Stack);
void push(Stack, char ch);
char pop(Stack);
int stack_underflow();
int stack_overflow();
char peek(Stack);

#endif
