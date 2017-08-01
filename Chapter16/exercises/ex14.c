/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 14

   Let shape be the structure tag declared in Exercise 13. Write functions that perform
   the following operations on a shape structure s passed as an argument:

   (a) Computer the area of s.
   (b) Move s by x units in x direction and y units in the y direction, returning
       the modified version of s.
   (c) Scale s by a factor of c, returning of the modified version of s.
*/
#define RECTANGLE 1
#define CIRCLE 2
#define PI 3.14

#include <stdio.h>
struct point { int x, y; };
struct shape {
	int shape_kind;
	struct point center;
	union {
		struct {
			int height, width;
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
};

int compute_area(struct shape s){
	int area = 0;
	if(s.shape_kind == RECTANGLE){
		return area = s.u.rectangle.height * s.u.rectangle.width;
	} else if (s.shape_kind == CIRCLE){
		return area = PI * (s.u.circle.radius * s.u.circle.radius);
	}
}

struct shape scale(struct shape s, int c){
	if(s.shape_kind == RECTANGLE){
		s.u.rectangle.height *= c;
		s.u.rectangle.width *= c;
	} else if (s.shape_kind == CIRCLE)
		s.u.circle.radius *= c;
	return s;
}

int main(void){
	struct shape s1;
	s1.shape_kind = RECTANGLE;
	s1.u.rectangle.width = 15;
	s1.u.rectangle.height = 30;
	printf("Area of rectangle: %d\n", compute_area(s1));
	s1.shape_kind = CIRCLE;
	s1.u.circle.radius = 15;
	printf("Area of circle: %d\n", compute_area(s1));
	return 0;
}

