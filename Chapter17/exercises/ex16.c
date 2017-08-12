/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" Chapter 17, Exercise 16

   Write the following function. The call sum(g, i, j) should return g(i) + ... + g(j)
   int sum(int (*f)(int), int start, int end);
*/

int sum(int (*f)(int), int start, int end){
	int total;
	while(start <= end){
		total += (*f)(start);
		start++;
	}
	return start;
}

