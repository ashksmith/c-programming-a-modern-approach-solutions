/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 6, programming project 3

Q: Programmin project in chapter 4 asked you to write a proram that displays a two-figit number with its 
digits reversed. Generalize the program so that the number can have one, two, three or more digits. 
*/

#include <stdio.h>
int main(){
	int input;
	printf("Enter a number: ");
	scanf("%d", &input);

	while(input > 0){
		printf("%d", input % 10);
		input = input / 10;
	}
	return 0;
}
