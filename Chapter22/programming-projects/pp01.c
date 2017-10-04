/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* canopen.c (Chapter 22, page 547) */
/* Checks whether a file can be opened for reading */

/* Extend the canopen.c program of section 22.2 so that the user may put any
   number of file names on the command line:

   	can open foo bar baz
   
   The program should print a seperate can be opened or can't be opened message
   for each file. Have the program terminate with EXIT_FAILURE if one or more
   of the files can't be opened.

   ORIGINAL: http://knking.com/books/c2/programs/canopen.c
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;

  if (argc < 2) {
    printf("usage: canopen filename1 filename2 ... filenameX\n");
    exit(EXIT_FAILURE);
  }
  
  int i;
  //argv[1] is the file itself
  for(i = 1; i < argc; i++){
	if((fp = fopen(argv[i], "r")) == NULL){
		printf("%s can't be opened\n", argv[i]);
		exit(EXIT_FAILURE);
	} else {
		printf("%s can be opened\n", argv[i]);
		fclose(fp);
	}
  }

  return 0;
}
