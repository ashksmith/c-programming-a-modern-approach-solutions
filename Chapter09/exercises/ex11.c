/* Author: Ashley K. Smith (https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 9, exerice 11
 *
 * Write the following function:
 *
 * float compute_GPA(char grades[], int n);
 *
 * The grades array will contain letter grades (a,b,c,d,e or f, either upper or lower case)
 * n is the length of the array. The funtion should return the average of the grades.
 * A = 4, f = 0.
 */

#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n);

int main(){
	char my_grades[] = {'A', 'B', 'A', 'C', 'A', 'F'};
	printf("computer_GPA test. Expected: 2.83, actual: %.2f\n", compute_GPA(my_grades, 6));
}

/* Takes array of char grades[], converts each grade to a integer value 
 * and retrusn the average. n is the number of grades */
float compute_GPA(char grades[], int n){
	int i = 0;
        float avg = 0;
	for(i = 0; i < n; i++){
		switch(toupper(grades[i])){
			case 'A':
				avg += 4;
				break;
			case 'B':
				avg += 3;
				break;
			case 'C':
				avg += 2;
				break;
			case 'D':
				avg += 1;
				break;
			default:
				break;
		}
	}
	return avg / n;
}
