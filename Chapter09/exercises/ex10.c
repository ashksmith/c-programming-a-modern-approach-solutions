/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 10
 *
 * Write functions that return the following values.
 *
 * (a) The largest elemet in a.
 * (b) The average of all elements in a
 * (c) the number of positive elements in a
 */

#include <stdio.h>

int returnLargest(int a[], int n);
int average(int a[], int n);
int noOfPosInt(int a[], int n);

int main(void){
	int array[10] = {3,2,0,3,6,4,3,4,3,2};
	printf("returnLargest test. Expected: 6, actual: %d\n", returnLargest(array, 10));
	printf("average test. Expected 3, actual: %d\n", average(array, 10));
	printf("noOfPosInt test. Expected: 10, actual : %d\n", noOfPosInt(array, 10));

	return 0;
}

/* Returns the largest in a
 * n is the number of elements*/
int returnLargest(int a[], int n){
	int largest = 0, i = 0;
	for(i = 0; i < n; i++)
		if(a[i] > largest)
			largest = a[i];

	return largest;
}

/* Returns the average of all elements in a
 * n is the number of elements */
int average(int a[], int n){
	int avg = 0, i = 0;
	for(i = 0; i < n; i++)
		avg += a[i];

	return avg / n;
}

/* Returns the number of positive integers in a
 * n is the number of elements */
int noOfPosInt(int a[], int n){
	int i = 0, total = 0;
	for(i = 0; i < n; i++)
		if(a[i] >= 0)
			total++;
	return total;
}



