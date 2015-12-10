/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 2

Q: The following program fragments illustrate the relational and equality operators. Show the output produced by each assuming that i, j and k are int variables.

(a) i = 10; j = 5;
    printf("%d", !i < j);

   (!i) = 0, 0 < j. 
   The result is 1.

(b) i = 2; j = 1;
    printf("%d", !!i + !j);
   
    !i = 0, !!i = 1.
    !j = 0. 0 + 1 = 1.
    The result is 1.

(c) i = 5; j = 0; k = -5;
    printf("%d", i && j || k);
    
    The expression is the same as (i && j) || k
    i is a non-zero value so the expression is short circuited. i or k is a non-zero value.
    The result is 1.   

(d) i = 1; j = 2; k = 3;
    printf("%d", i < j || k );

    The expression is the same as (i < j) || k
    k is a non zero value, so the result will be 1.

*/
