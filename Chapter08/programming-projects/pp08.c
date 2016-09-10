/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, programming project 8
 *
 * Modify programming project 7 so that ir prompts for five quiz grades
 * for each of the five-students, then computes the total score for each student
 * and the average score for each quiz.
 */

#include <stdio.h>

int main(){
	int grades[5][5] = {0}, input = 0, i = 0, n = 0, total = 0;
        double avg = 0.0;

	printf("\t\t Student: 1 2 3 4 5\n");
	printf("--------------------------------------\n");

	for(i = 0; i < 5; i++){
		printf("Enter results for quiz %d: ", i + 1);
		scanf("%d %d %d %d %d", &grades[i][0], &grades[i][1], &grades[i][2],
				        &grades[i][3], &grades[i][4]);
		
	}

	printf("\t\t  Totals: ");
	//find score for each student
	for(i = 0; i < 5; i++){
		for(n = 0; n < 5; n++){
			total += grades[n][i];
		}
		printf("%d  ", total);
		total = 0;
	}

	printf("\n\t\t Average: ");
	//find score for each student
	for(i = 0; i < 5; i++){
		for(n = 0; n < 5; n++){
			avg += grades[i][n];
		}
		printf("\n\t\t         %.1f", avg / 5);
		avg = 0;
	}

	printf("\n");
	return 0;
}

