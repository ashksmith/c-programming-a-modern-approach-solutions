/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, exercise 8
*/
 
Q: The following if statement is unneccessarily simplify it as much as possible.

if (age >= 13)
  if(age <= 19)
    teenager = true;
  else
    teenager = false; 
else if (age < 13)
  teenager = false;

A:

if(age >= 13 && age <= 19){
	teenager = true;
} else {
	teenager = false;
}

Personally, I find the above to be simple and readable. The statement can also be simplified to a single line conditional expression below.

teenager = age >= 13 && age <= 19 ? true : false;


