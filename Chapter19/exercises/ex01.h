/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" Chapter 19, Exercise 1

   A queue is similar to a stack, except that items are added at one and but removed from
   the other in a FIFO fashion. Operations on a queue might include:
   	Inserting an item at the end of a queue
	Removing an item from the beginning of the queue
	Returning the first item in the queue (Without changing the queue)
	Returning the last item in the queue (Without changing the queue)
	Testing whether the queue is empty

   Write an interface for the queue module in the form of a header file.
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;
typedef struct queue_type *Queue;

void enqueue(Item);
void dequeue(Item);
Item get_first(void);
Item get_last(void);
bool is_queue_empty(void);

#endif
