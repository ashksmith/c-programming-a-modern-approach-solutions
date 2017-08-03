/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 1

   Write a program that asks the user to enter an international dialing code and then
   looks it up in the country_codes array. If it finds the code, the program
   should display the name of the corresponding country; if not, the program
   should pring an error message.
*/

#include <stdio.h>
#include <stdlib.h>

struct dialing_code { char * country; int code; };

int main(void){
	const struct dialing_code country_codes[] =
		{{"Argentina", 54}, {"Bangladesh", 880}, {"Brazil", 55}, {"Burma (Myanmar)", 95},
		 {"China", 86}, {"Colombia", 57}, {"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
		 {"Ethiopia", 251}, {"France", 33}}; //Etc...etc

	int i, input_code;
	printf("Please enter a country code: ");
	scanf("%d", &input_code);
	for(i = 0; i < sizeof(country_codes) / sizeof(country_codes[0]); i++)
		if(input_code == country_codes[i].code){
			printf("Dialing code %d belongs to %s\n", input_code, country_codes[i].country);
			return 0;
		}

	printf("No code found in database\n");



	return 0;
}
