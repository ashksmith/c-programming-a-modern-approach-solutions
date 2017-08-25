#define MAX_QUEUE_ITEMS 100

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

static struct queue_node *create_node(void);
static int num_items;

static struct queue_node {
	struct queue_node *next;
	Item item;
} *front = NULL, *rear = NULL;

void init_queue(void){
	rear->next = front;
}

void enqueue(Item i){
	// Create new node
	struct queue_node *new_node = create_node();
	new_node->item = i;
	if(front == NULL){
		front = rear = new_node;
	} else {
		rear->next = new_node;
		rear = new_node;
	}
	num_items++;
}

Item dequeue(void){
	if(is_queue_empty()){
		printf("Queue unerflow\n");
		exit(EXIT_FAILURE);
	}

	Item i = front->item;
	struct queue_node *old = create_node();
	old = front;
	front = front->next;
	num_items--;
	return i;
}

Item peek_first(void){
	return front->item;
}

Item peek_last(void){
	return rear->item;
}

bool is_queue_empty(void){
 	if(num_items == 0){
		return true;
	} else {
		return false;
	}
}

static struct queue_node *create_node(void){
	struct queue_node *node = malloc(sizeof(struct queue_node));
	if(node == NULL){
		printf("Not enough memory\n");
		exit(EXIT_FAILURE);
	}
	return node;
}
