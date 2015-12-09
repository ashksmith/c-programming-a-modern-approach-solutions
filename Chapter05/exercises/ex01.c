/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 1


the following program fragments illustrate the relational and equality operators. Show the output produced by each, assuming that i, j, and k are int variables.

(a)i = 2; j = 3;
   k = i * j ==6;
   printf("%d", k);

   Is the same as k = (i * j) == 6. the result is 1.

(b)i = 5; j = 10; k = 1;
   printf("\n%d\n", k > i < j);
   
   Is the same as comparing the result of k > i, to < j. The result is 0.


*/

#include <stdio.h>

int main(void){
	int i, j, k;
	i = 5;
	j = 10;
	k = 1;
	printf("\n%d\n", k > i < j);
	return 0;
}
