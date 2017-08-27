#include "stack.h"
#include <stdio.h>

int main(void){
	Stack s1;
	s1 = create();
	push(s1, 5);
	push(s1, 10);
	pop(s1);
	pop(s1);
	push(s1, 500);
	push(s1, 102);
	pop(s1);
	return 0;
}
