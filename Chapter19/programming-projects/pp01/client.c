#include "stack.h"

int main(void){
	Stack s = create();

	char ch;
	while((ch = getchar()) != '\n'){
		if(ch == '(' || ch == '{')
			push(s, ch);

		if(ch == '}' && pop(s) != '{'){
			printf("Braces / Parentheses not nested correctly\n");
			break;
		} else if(ch == ')' && pop(s) != '('){
			printf("Braces / Parentheses not nested correcntly\n");
			break;
		}

	}

	if(is_empty(s)){
		printf("Braces / Parentheses matched correctly\n");
	} else {
		printf("Braces / Parentheses did not match\n");
	}

	return 0;
}
