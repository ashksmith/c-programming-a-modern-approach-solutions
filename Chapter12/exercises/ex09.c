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
		//Using array names as pointers, sum together the product of
		// the elements	of arr1, and arr2. In C99 the compiler
		// will treat pointers and arrays the same. Passing arr1 to this
		// function is the same as a = &arr1[0].
		sum = sum + ((*(a++)) * (*(b++)));
	}
	return sum;

}
