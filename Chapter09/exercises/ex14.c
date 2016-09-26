/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 14
 *
 * The following function is supposed to return true is any element of the array a has the value
 * 0 and false is the elements are nonzero. Sadly, it contains an error. Find the error
 * and show how ot fix it.
 *
 * bool has_zero(int a[], int n){
 * int i;
 * for(i = 0; i < n; i++)
 * 	if(a[i] == 0)
 * 		return true;
 * 	else
 * 		return false;
 *
 * }
 */

#include <stdio.h>

bool has_zero(int a[], int n)

int main(void){



}

//The error in this function is that the function is terminated the moment
//a non-zero element is found, not if all elements are non-zero. It won't test
//all the elements. The fix is just to return false, and terminate if a zero is found.
bool has_zero(int a[], int n){
	int i;

	for(i = 0; i < n; i++)
		if(a[i] == 0)
			return true;


	return false;
}
