/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" Chapter 17, Exercise 12

   Write the following function:

   struct node *find_liast(struct node *list, int n);

   The list parameter points to a linked list. The function should return a pointer to the last node
   that contains n; it should return NULL if n dosn't appear in the list. Assume that the node
   structure is the one defined in Section 17.5.

*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
} *top = {NULL};

struct node *find_last(struct node *list, int n){
	// Create an already null pointer, incase we don't find n
	struct node *last = NULL;

	// Loop through the list, searching for n. If we find n, set last pointer to the address
	for(; list != NULL; list = list->next){
		if(list->value == n)
			last = list;
	}

	//Return last
	return last;
}

int main(void){
	struct node x = {5, top};
	top = &x;
	printf("%d\n", find_last(top, 4));



	return 0;
}

