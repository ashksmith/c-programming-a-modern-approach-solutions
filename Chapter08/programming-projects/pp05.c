/* Author: Ashley K. Smith
 * Solution to "C Programming A Modern Approach" chapter 8, programming project 5
 *
 * Modify the interest.c program of section 8.1 so that it compounds interest monthly
 * instead of annually. The form of the output shouldn't change; the balance should
 * still be at annual intervas
 */

#include <stdio.h>
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE	100.00

int main(void){
	int i, low_rate, num_years, year, month;
	double value[5];

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	printf("\nYears");
	for(i = 0; i < NUM_RATES; i++){
		printf("%8d%%", low_rate +i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for(year = 1; year <= num_years; year++){
		printf("%3d	", year);
		for(i = 0; i < NUM_RATES; i++){
			for(month = 1; month <= 12; month++){
				value[i] *= ((double)(low_rate +1) / 12 / 100.0 + 1);
			}
			printf("%9.2f", value[i]);
		}
		printf("\n");
	}
		
	return 0;
}

