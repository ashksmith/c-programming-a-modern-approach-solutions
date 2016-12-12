/* Author: Ashley K. Smith (https://github.com/ashksmith
 * Solution to "C Programming: A modern approach" chapter 12, exercise 9
 *
 * Write the following function, using pointer arithmetic:
 *
 * double inner_product(const double *a, const double *b, int n);
 *
 * Answers checked with http://calculator.vhex.net/post/calculator-result/inner-product
 */

#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void){
	double arr1[] = {7,3,9,12,5};
	double arr2[] = {4,5,6,7,5};
	printf("\n%.2f\n", inner_product(arr1, arr2, 5));
	return 0;
}

//returns the product of a and b
double inner_product(const double *a, const double *b, int n){
	//Stored the product
	double sum = 0.0;
	//counts iterations
	int i = 0;
	while(i < n){
		i++;
		//a and b are pointers to the base address of each passed array.
		//Using pointer arithmetic to increment through the elements
		//of each array it is possible to add the product of each array
		sum = sum + ((*(a++)) * (*(b++)));
	}
	return sum;

}
