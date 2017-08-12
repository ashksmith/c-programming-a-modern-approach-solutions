/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" Chapter 17, Exercise 14

   Modify the delete_from_list function (Section 17.5) so that its first parameter has type struct node **
   (A pointer to a pointer to the first node in a list) and it's return type is void delete_from_list
   must modify its first argument to point to the list after the desired node has been deleted.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

// Takes a pointer to a pointer
void *delete_from_list(struct node **list, int n){
	struct node *cur, *prev;

	// cur is a pointer to the head of the linked list, which **list is a pointer too. god
	for(cur = *list, prev = NULL;
	    cur != NULL && cur->value != n;
	    prev = cur, cur = cur->next)
	;

	if(cur == NULL)
		;
	if(prev == NULL)
		// if pev is null, reset the head to address of the next link in the list
		*list = (*list)->next;
	else
		prev->next = cur->next;
}

int main(void){
	struct node p1 = {1, NULL};
	struct node p2 = {2, &p1};
	struct node p3 = {3, &p2};
	struct node p4 = {4, &p3};
	struct node p5 = {5, &p4};
	struct node *head = &p5;
	struct node *p;

	for(p = head; p != NULL; p = p->next){
		printf("%d\n", p->value);
	}
	delete_from_list(&head, 3);
	putchar('\n');
	for(p = head; p != NULL; p = p->next){
		printf("%d\n", p->value);
	}

	return 0;
}
