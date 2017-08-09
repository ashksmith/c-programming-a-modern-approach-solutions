/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" Chapter 17, Exercise 10

   Modify the print_part function of section 16.2 so that its paramter is a pointer to a part
   structure. Use the -> operator in your answer.
*/

#include <stdio.h>
#include <stdlib.h>

struct part {
	int number;
	char name[101];
	int on_hand;
} part1 = {5, "Samsung TV", 7};

void print_part(struct part *p){
	printf("Part number: %d\n", p->number);
	printf("Part name: %s\n", p->name);
	printf("Quantity on hand: %d\n", p->on_hand);
}

int main(void){
	print_part(&part1);
	return 0;
}
