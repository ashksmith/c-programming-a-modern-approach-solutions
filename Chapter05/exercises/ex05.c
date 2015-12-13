/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 5.

Q: Is the following if statement legal?

if (n >= 1 <=10)
	printf("n is between 1 and 10\n");

No, the correct statement is :
	if (n >= 1 && n <= 10){
		 expr1, ...
	}

*/

