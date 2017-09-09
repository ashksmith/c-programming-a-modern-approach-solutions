/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 20, exercise 9

   (a) Write the following function:
   	int count_ones(unsigned char ch);
   count_ones should return the number of 1 bits in ch.

   (b) Write the function in part (a) without using a loop.
*/

#include <stdio.h>
#include <stdbool.h>

int count_ones_a(unsigned char);
int count_ones_b(unsigned char);

int main(void){
	// char is 1byte
	char num = 55;
	printf("%d\n", count_ones_a(num));
	printf("%d\n", count_ones_b(num));
	return 0;
}

int count_ones_a(unsigned char ch){
	int count = 0, i = 0;
	while(i < 8){
		if(ch & 1 << i++)
			count++;
	}

	return count;
}

int count_ones_b(unsigned char ch){
	int count = 0;
	count += ((ch >> 0) & 1) +
	       	 ((ch >> 1) & 1) +
	         ((ch >> 2) & 1) +
	         ((ch >> 3) & 1) +
	         ((ch >> 4) & 1) +
	         ((ch >> 5) & 1) +
	         ((ch >> 6) & 1) +
	         ((ch >> 7) & 1);
	return count;
}
