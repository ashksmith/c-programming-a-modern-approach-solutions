#define MAX_QUEUE_ITEMS 100

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

static int front = 0, rear = 0, num_items = 0;
static Item queue[MAX_QUEUE_ITEMS];

// Item should be added to the rear of the queue
void enqueue(Item i){
	if(num_items >= MAX_QUEUE_ITEMS){
		printf("Queue overflow\n");
		exit(EXIT_FAILURE);
	} else {
		queue[rear++] = i;
		num_items++;
	}
}

// Take front item, make a copy, remove the front item
// return item
Item dequeue(void){
	if(is_queue_empty()){
		printf("Queue underflow\n");
		exit(EXIT_FAILURE);
	} else {
		Item i = queue[front];
		front += 1;
		num_items--;
	}
}

// Take a look at the current front item without removing it
Item peek_first(void){
	if(!is_queue_empty()){
		return queue[front];
	} else {
		printf("Queue empty\n");
		exit(EXIT_FAILURE);
	}
}

Item peek_last(void){
	if(!is_queue_empty()){
		return queue[rear - 1];
	} else {
		printf("Queue empty\n");
		exit(EXIT_FAILURE);
	}
}

Item getlast(void){
	return queue[rear];
}

bool is_queue_empty(void){
 	if(num_items == 0){
		return true;
	} else {
		return false;
	}
}
