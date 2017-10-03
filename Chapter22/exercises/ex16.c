/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 22, exercise 15

   Assume that str is a string that contains a "sales rank" immediately preceded by 
   the # symbol (Other characters may precede the # and/or follow the sales rank.) 
   A sales rank is a series of decimal digits possibly containing commas, such as 
   the followin examples:
   
   989
   24,675
   1,162,620

   Write a call of sscanf that extracts he sales rank but not the # symbol, and stores
   it in a string variable named sales_rank.   
*/
#include <stdio.h>

//void shift_array_left(char *, int);

#define LEN 50


int main(void){
	char input_number[LEN];
	scanf("sales rank#%s", input_number);
	int i;
	for(i = 0; i < LEN && i != '\0'; i++){
		if(input_number[i] == ','){
			shift_array_left(input_number, i);	
		}
	}

	printf("\n%s\n", input_number);

	return 0;
}

//// Removes commas from the array by shifting remaining characters
//// down 1 to the left
//void shift_array_left(char *array, int i){
//	while(array[i] != '\0')
//		array[i++] = array[i + 1]; 
//}
