/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 17 exercise 1

   Having to check the return value of malloc (or any other memory allocation
   function) each tim we call it can be annoyance. Write a function named my_alloc
   that serves as a "wrapper" for malloc. When we call my_malloc and ask it to
   allocate n bytes, it in turn calls malloc, tests to make sure that malloc
   dosn't return a null pointer, and then return the pointer from malloc. Have
   my_malloc print an error message and terminate the program if malloc returns
   a NULL pointer.
*/
#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t n){
	void *p = malloc(n);

	printf("%d\n", sizeof(p));
	if(p == NULL){
		printf("Fuck you error\n");
		exit(EXIT_FAILURE);
	}

	return p;
}

int main(void){


	return 0;
}
