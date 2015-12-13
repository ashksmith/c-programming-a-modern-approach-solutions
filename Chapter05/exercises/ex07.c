/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 7


Q: What does the following statement print if i has the value 17?what does it print if i has the value -17?

int i = 17;
printf("%d\n", i >= 0 ? i : -i);

This conditional expression is read as : "If i is greater than or equal to 0, print i, else print -i

In the case that i = 17, the program will print i, which is 17.
In the case that i = -17, the program will print -(-i) which is 17.





