/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 12
 *
 * Write the following function:
 *
 * double inner_product(double a[]. double b[], int n);
 */

#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(){
	double array1[] = {15, 10, 5, 5, 20};
	double array2[] = {6, 12, 36, 18, 6};

	printf("inner_product test. Expected: 600, actual: %.2f\n", inner_product(array1, array2, 5));
}

double inner_product(double a[], double b[], int n){
	int i = 0;
	double sum = 0;

	for(i = 0; i < n; i++){
		sum += a[i] * b[i];
	}
	return sum;
}
