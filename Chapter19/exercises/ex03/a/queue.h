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

// Adds an item to the rear of the queue
void enqueue(Item);

// Removes an item from the front of the queue
Item dequeue(void);

// Returns the item at the front the queue without removing it.
Item peek_first(void);

Item peek_last(void);

// Returns the item at the rear of the queue
Item get_last(void);

// Checks if the queue is empty
bool is_queue_empty(void);
#endif
