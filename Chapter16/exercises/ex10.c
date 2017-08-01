/* Author: Ashley K. Smith (https://github.com/ashksmith/)
   Solution to "C Programming: A modern Approach" chapter 16 programming project 10

   The following structures are designed to store information about objects on a graphics
   screen:

   struct point {int x, y };
   struct rectangle { struct point upperleft, lower_right; };

   a point structure stores the x and y coordinates of a point on the scren. A rectangle
   structure stores the corrdinates of the upper left and lower right corners of a
   rectangle. Write function that perform the following operations on a rectangle
   structure r passed as an argument.

   (a) Computer the area of r.
   (b) Computer the centre of r, returning it as a point balue.
   (c) Move r by x units in the x direction and y units in the y direction, returning
       modified version of r. (x and y are additional arguments to the function).
   (d) Determine whether a point p lies with r, returning true or false. (p is an
       additional argument of type struct point.)
*/

#include <stdio.h>
struct point { int x, y; };
struct rectangle { struct point upperleft, lower_right; };

int area(struct rectangle r){

}


int main(void){
	


}

