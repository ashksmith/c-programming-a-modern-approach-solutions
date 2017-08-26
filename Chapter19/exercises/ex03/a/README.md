Author: Ashley K. Smith (https://github.com/ashksmith/)
Solution to "C Programming: A modern Approach" chapter 17 programming project 3

(a) Write an array based implementation of the queue module described in ex01.
    Use three integers to keep track of the queue's status, with one integer storing
    the first emprt slot in the array, second for storing the position of the next
    item and the third storing the number of items in the queue. An insertion or
    removal that would cause either of the

    First two integers to be incrememnted past the end of the array should instead
    reset the the variable to zero, thus causing it to wrap around to the beginning
    of the array.

(b) Write a linked-list implementation of the queue module described in Exercise 1.
    Use two pointers, one poinging to the first node in the list and the other
    pointing to the last node. When an item is inserted into the queue, add it
    to the end of the list. When an item is removed from the queue, delete the
    first noe in the list.

