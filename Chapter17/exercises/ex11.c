/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" Chapter 17, Exercise 11

   Write the following function:

   int count_occurances(struct node *list, int n);

   The list parameter points to a linked list; the function should return the number of times that
   n appears in this list. Assume that the node strcuture is the one defined in Section 17.5.
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
} *top = {NULL};

// Returns the number of n in the list
int count_occurances(struct node *list, int n){
	int count = 0;
	// Check if the list is null
	if(top == NULL){
		printf("List is null\n");
		exit(EXIT_FAILURE);
	}

	// Loop through the list to count the number of n in the list. 
	// Can also be achieved through using a while loop, but I find this easier to intepret
	for(; list != NULL; list = list->next)
		if(list->value == n)
			count++;

	// Return the number of occurances
	return count;
}

int main(void){
	struct node x = {5, top};
	top = &x;
	printf("%d\n", count_occurances(top, 4));
	return 0;
}
