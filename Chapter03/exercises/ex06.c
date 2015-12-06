/* Author: Ashley K. Smith 
 * Solution to "C Programming: A modern approach" chapter 3, exercise 6
*/

//It's not the same program, but the concept is the same. Adding a space after the first conversion specifier will allow
//a space before and after the /


#include <stdio.h>

int main(void){
	int x = 0, j = 0;
	scanf("%d /%d", &x, &j);
	printf("\n%d %d\n", x, j);

	return 0;
}
