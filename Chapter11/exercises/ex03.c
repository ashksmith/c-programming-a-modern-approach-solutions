/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 11, exercise 3.

 * "The following function supposedly computes the sum and average of the numbers
 * in array a, which has length n. avg and sum point to variables that the function
 * should modify. Unfortunately, the function contains several errors. Find and
 * correct them"
 *
 * void avg_sum(double a[]. int n, double *avg, double *sum){
 *	int i;
 *	sum = 0.0;
 *	for(i = 0; i < n; i++)
 *		sum+= a[i];
 *	avg = sum / n;
 * }
*/

#include <stdio.h>
void avg_sum(double a[], int n, double *avg, double *sum);

int main(void){
	double input[5] = {54, 12, 65, 15, 10};
	double avg, sum;
	int n = 5;
	avg_sum(input, n, &avg, &sum);
	printf("Avg sum test, expected (156 / 5 = 31.2), actual: %.2f\n)", avg);




}

void avg_sum(double a[], int n, double *avg, double *sum){
	int i;
	*sum = 0.0;
	for(i = 0; i < n; i++){
		*sum += a[i];
	}
	*avg = *sum / n;
}

