/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 2

Q: The following program fragments illustrate the relational and equality operators. Show the output produced by each assuming that i, j and k are int variables.

(a) i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k);

    The expression is the same as (i < j) || ((++j) < k)
    i < j = 0, (j + 1) < k = 0.
    The result of the expression is 0.
    The values of i, j and k are 3, 5 and 5.

(b) i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);

    The expression is the same as (i - 7) && ((j++) < k)
    i - 7 = 0, the expression is consdired to be short circuited. j++ is not peformed.
    The values of i, j and k are 7, 8 and 9.

(c) i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k)
    printf("%d %d %d", i, j, k);

    The values of i, j and k are 8 9 9.
    Correction: The result is 8 8 and 9, due to the i = j is a non-zero value the OR operator is satisfied. and j = k is not performed.

(d) i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, k, k);

    the expression is the same as (++i) || (((++j) && (++k)))
    both || and && are satisfied as all vari

*/

#include <stdio.h>

int main(void){
	int i, j, k;
	i = 1; j = 1; k = 1;
	printf("%d\n", ++i || ++j && ++k);
	printf("%d %d %d", i,j,k);

	return 0;
}


