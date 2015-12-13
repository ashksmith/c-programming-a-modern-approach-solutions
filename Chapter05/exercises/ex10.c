/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 10
*/

Q: What output does the following program fragment produce? (Assume that i is an integer variable).


i = 1;
switch (i % 3){
	case 0: printf("zero");
	case 1: printf("one");
	case 2: printf("two");
}

A: the result of i % 3 is one. Because there is no break points, the result is "onetwo"
