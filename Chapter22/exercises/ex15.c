/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 22, exercise 15
	
   Write calls fo fseek that perform the following file-position operations on a 
   binary file who data is arranged as 64byte "records". se fp as the file pointer
   in each case. 

   (a) Move to the beginning of record n. (Assume that the first record in the file
       is record 0.)

   (b) Move to the beginning of the last record in the file. 

   (c) Move foward one record.

   (d) Move backwards two records.
*/
#include <stdio.h>
int main(void){
	fseek(fp, 0L, SEEK_END);
	fseek(fp, -64L, SEEK_CUR);
	fseek(fp, 64L, SEEK_CUR);
	fseek(FP, -128L, SEEK_CUR);
	return 0;
}
