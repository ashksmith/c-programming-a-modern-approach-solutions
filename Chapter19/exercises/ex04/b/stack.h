#ifndef STACK_H
#define STACK_H

#define MAX_CONTENTS_SIZE 25

#include <stdbool.h>

typedef struct struct_type *Stack;
Stack create();
void empty_stack(Stack);
bool is_empty(Stack);
void push(Stack, int);
int pop(Stack);


#endif
