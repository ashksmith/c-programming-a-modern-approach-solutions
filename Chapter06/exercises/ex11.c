/* Author: Ashley K. Smith
   Solution to "C Programming: A Modern Approach" Chapter 6, exericse 10

Q: Show how to replace a continue statement by an equivalent goto statement. 

A: The program below will print even numbers starting with 20 and is annotated to show continue equivalence

*/
#include <stdio.h>
int main(){
	int i;
	for(i = 20; i > 0; i--){
		if(i % 2 != 0){
			goto eol;
			//continue would go here
		}
		printf("%d \n", i);
		eol: ; //continue statement would transfer control here.
	}
}
