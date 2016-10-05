/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, programming project 1
 *
 * Write a program that sks the user to enter a series of integers, which are stored
 * in an array, then sorts them by calling the function selection_sort. When given
 * an array with n elements, selection_sort must do the following:
 *
 * 1. Search the array to find the largest element, then move it to the last
 *    position in the array.
 *
 * 2. Call itself recursivly to sort the first n - 1 elements of the array.
 */

#include <stdio.h>

int selection_sort(int integer_list[], int n);

int main(void){
	int i = 0, array[30], input = 0, index_num = 0;

	printf("Enter a series of (up to) 30 numbers): ");

	for(i = 0; i < 30 && (input = getchar()) != '\n'; i++){
		scanf(" %d", &array[i]);
		index_num++;
	}

	//Print array before being sorted
	printf("\nUnsorted array: ");
	for(i = 0; i < index_num; i++)
		printf("%d ", array[i]);

	selection_sort(array, index_num);

	//Print array after being sorted.
	printf("\nSorted array: ");
	for(i = 0; i < index_num; i++)
		printf("%d ", array[i]);

	printf("\n");
	return 0;
}

//Sorts an array of integers of index length n
int selection_sort(int integer_list[], int n){
	//checks if n is zero, if so exit
	if(n == 0) return;

	//Store current highest number
	int highest_num = 0, i = 0;

	//Test if current element is greater than the current highest number. 
	//If yes, swap with the last element and store in highest_num
	for(i = 0; i < n; i++){
		if(integer_list[i] > highest_num){
			highest_num = integer_list[i];
			integer_list[i] = integer_list[n - 1];
			integer_list[n - 1] = highest_num;
		}
	}

	selection_sort(integer_list, n - 1);
}
