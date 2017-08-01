/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 9

   Write the following functions using the colour structure from exercise 8.

   (a) struct colour make_colour(int red, int green, int blue);
       Returns a colour structure whose embers make up the specified arguments.
       If any argument is less than zero, the corresponding members of the structure
       will contain a zero instead. If any argument is greater than 255, the corresponding
       member of the structure will contain 255.

   (b) int getRed(struct colour c);
       Returns the value c's red member.

   (c) bool equal_color(struct colour colour1, struct colour colour2);
       Returns true if the corresponding members of colour1, and colour2 are equal.


   (d) struct colour brighter(struct colour c);
       Returns a colour structure that represents a brighter version of colour c. The
       structure is identical to c, except that each member has been divided by 0.7.
       However, there are three special cases: (1) If all members of c are zero the
       function returns a colour whose members all have the value 3. (2) If any member
       of c is greater than 0, but less than 3, it is replaced by 3 before division by
       0.7. (3) If dividing by 0.7 causes a member to exceed 255, it is reduced to 255.

   (e) struct colour darker(struct colour c);
       Returns a colour structure that represents a darker version of colour c. The structure
       is identical to c, except that each member has been multiplied by 0.7.


*/
#include <stdio.h>
#include <stdbool.h>
struct colour { int red, green, blue; };

// (a)
struct colour make_colour(int red, int green, int blue){
	 struct colour new_colour = {red, green, blue};
	 return new_colour;
}

// (b)
int getRed(struct colour c){
	return c.red;
}

// (c)
bool equal_colour(struct colour colour1, struct colour colour2){
	if(colour1.red == colour2.red && colour1.green == colour2.green && colour1.blue == colour2.blue)
		return true;
	else
		return false;
}

// (d)
struct colour brighter(struct colour c){
	struct colour brighter_colour;
	if(c.red == 0 && c.green == 0 && c.blue == 0){
		brighter_colour.red = 0; brighter_colour.blue = 0; brighter_colour.green = 0;
	}

	if(c.red > 0 && c.red < 3)
		brighter_colour.red = (3 / 0.7);

	if(c.green > 0 && c.green < 3)
		brighter_colour.green = (3 / 0.7);

	if(c.blue > 0 && c.blue < 3)
		brighter_colour.blue = (3 / 0.7);

	brighter_colour.red = c.red / 0.7;
	brighter_colour.green = c.green / 0.7;
	brighter_colour.blue = c.blue / 0.7;

	if(brighter_colour.red > 255)
		brighter_colour.red = 255;

	if(brighter_colour.green  > 255)
		brighter_colour.green = 255;

	if(brighter_colour.blue > 255)
		brighter_colour.blue = 255;

	return brighter_colour;
}

// (c)
struct colour darker(struct colour c){
	struct colour darker_colour = {c.red * 0.7, c.green * 0.7, c.blue * 0.7};
	return darker_colour;
}

int main(void){
	struct colour c1 = make_colour(200, 50, 2);
	struct colour c2 = make_colour(120, 59, 2);
	printf("c1: red = %d, green = %d, red = %d\n", c1.red, c1.green, c1.blue);
	printf("c1.red: %d\n", getRed(c1));
	printf("c1 equal_colour: %d\n", equal_colour(c1, c2));
	c1 = brighter(c1);
	printf("c1 brighter: red = %d, green = %d, red = %d\n", c1.red, c1.green, c1.blue);
	c2 = darker(c1);
	printf("c1 darker: red = %d, green = %d, red = %d\n", c2.red, c2.green, c2.blue);


}
