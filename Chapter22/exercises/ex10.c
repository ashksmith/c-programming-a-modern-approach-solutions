/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* https://github.com/ashksmith/)
 * Solution to "C Programming: A modern Approach" chapter 22, exercise 10

   The fcopy.c program has one minor flaw: It oes not check for errors as it's writing
   to the destination file. Errors during writing are rare, but do aoccasionally occur
   (The disk might become full for example"). Show how to add the missing error check 
   to the program, assuming that we want it to display a messag and terminate 
   immediately if an error occurs.

   Original available here: http://knking.com/books/c2/programs/fcopy.c
*/

/* fcopy.c (Chapter 22, page 568) */
/* Copies a file */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *source_fp, *dest_fp;
  int ch;

  if (argc != 3) {
    fprintf(stderr, "usage: fcopy source dest\n");
    exit(EXIT_FAILURE);
  }

  if ((source_fp = fopen(argv[1], "rb")) == NULL) {
    fprintf(stderr, "Can't open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if ((dest_fp = fopen(argv[2], "wb")) == NULL) {
    fprintf(stderr, "Can't open %s\n", argv[2]);
    fclose(source_fp);
    exit(EXIT_FAILURE);
  }
  // Error is here I think. What is the return favlue of putc?
  while ((ch = getc(source_fp)) != EOF){
    if(putc(ch, dest_fp) == EOF)
	    fprintf(stderr, "Error writing");
    	    exit(EXIT_FAILURE);
  }

  fclose(source_fp);
  fclose(dest_fp);
  return 0;
}
