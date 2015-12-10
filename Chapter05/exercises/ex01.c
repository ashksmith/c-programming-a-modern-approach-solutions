/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 1

Q: The following program fragments illustrate the relational and equality operators. Show the output produced by each assuming that i, j and k are int variables.

(a) i = 2; j = 3;
    k = i * j == 6;
    printf("%d", k);

    The expression is the same as peforming k = ((i * j) == 6);
    i * j == 6, therefore the value of k is 1.

(b) i = 5; j = 10; k = 1;
    printf("%d", k > i < j);

    The expression is the same as (k > i) < j. 
    K is not greater than i, so the result is 0. 0 is less than 10, so the result is expression is 1.

(c) i = 3; j = 2; k = 1;
    printf("%d", i < j == j < k);

    The expression is the same as (i < k) == (j < k)
    i is not less than k, so the result is 0. j is also not less than k so the result is 0.
    The result is 1. As both sides of the equal operator are 0.    

(d) i = 3; j = 4; k = 5;
    printf("%d", i % j + i < k);

    The expression is the same as ((i % j) + i) < k.
    i % j = 3 + i = 6.
    6 is not less than 5, the result is 0.

*/
