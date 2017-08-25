#include <stdio.h>
#include "queue.h"

int main(void){
	enqueue(12);
	printf("Last: %d, First: %d\n", peek_last(), peek_first());
	enqueue(15);
	printf("Last: %d, First: %d\n", peek_last(), peek_first());
	enqueue(27);
	printf("Last: %d, First: %d\n", peek_last(), peek_first());
	dequeue();
	printf("Last: %d, First: %d\n", peek_last(), peek_first());
	dequeue();
	dequeue();
	dequeue();

}
