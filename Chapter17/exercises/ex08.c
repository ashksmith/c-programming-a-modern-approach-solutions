/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 17 exercise 8

   Section 15.2 describes a file, stack.c, that provdes functions for storing integers
   in a stack. In that section, the stack was implemented as an array. Modify stack.c
   so that a stack is now stored as a linked list. Replace the contents and top
   variables by a single variable that points to the first node in the list. Write
   the functions in stack.c so that they use this pointer. Remove the is_ful function
   instead having push return either true (If memory was available create a node)
   and false if not.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure representing a node, with a null initialised pointer to a node.
struct node{
	int value;
	struct node *next;
} *top = {NULL};

void make_empty(){
	struct node *tmp;
	while(top != NULL){
		tmp = top->next;
		free(top);
		top = tmp;
	}
}

bool is_empty(void){
	if(top->next == NULL)
		 return true;
	else
		return false;
}

bool push(int i){
	// 1. Create a pointer to a new allocated memory for a node struct
	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	// Check if null, and return false if so
	if(new_node == NULL)
		return false;

	// 2. Store data into the node
	new_node->value = i;
	new_node->next = top;

	// 3. Insert the new node into the link by
	top = new_node;
	return true;
}

int pop(void){
	// Check if the list is empty before trying to maniupulate it. 
	if(is_empty()){
		printf("List is empty\n");
		exit(EXIT_FAILURE);
	}
	// Take the integer value from the current head of the list as a return value of pop
	int value = top->value;

	// Take a copy of the current heads, next in chain address
	struct node *n = top->next;

	// free the memory
	free(top);

	// Set head to current head
	top = n;
	return value;
}

int main(void){
	push(1);
	push(2);
	push(3);
	printf("%d\n", pop());
	return 0;
}

