#include "stack.h"
#include <stdio.h>

int main(void){
	Stack s1;
	s1.top = 0;
	push(&s1, 50);
	push(&s1, 27);
	printf("%d\n", pop(&s1));
	push(&s1, 209);
	printf("%d\n", pop(&s1));
	printf("%d\n", pop(&s1));
	printf("%d\n", pop(&s1));

	return 0;
}
