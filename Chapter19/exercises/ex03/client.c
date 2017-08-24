#include <stdio.h>
#include "queue.h"

int main(void){
	enqueue(5);
	enqueue(75);
	enqueue(12);
	printf("%d\n", peek_first());
	dequeue();
	printf("%d\n", peek_last());

}
