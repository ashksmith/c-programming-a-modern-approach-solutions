/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 4, exercise 6
 
   What is the value of each of the following expressions in c89?

   (a) 8 % 5

       3	  

   (b) -8 % 5
   
       -3       

   (c) 8 % -5

       3

   (d) -8 % -5
	
       -3

*/

#include <stdio.h>

int main(void){
	printf("\n%d\n", -8 % 5);
	
	return 0;
}

