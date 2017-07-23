/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* line.c (Chapter 15, page 364) */

#include <stdio.h>
#include <string.h>
#include "line.h"
#include <stdbool.h>

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;
// For alternating between left and right space weighting
bool right_space_weighting = false;

void clear_line(void)
{
  line[0] = '\0';
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
  if (num_words > 0) {
    line[line_len] = ' ';
    line[line_len+1] = '\0';
    line_len++;
  }
  strcat(line, word);
  line_len += strlen(word);
  num_words++;
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

//Exercise 1
void write_line(void)
{
	int extra_spaces, spaces_to_insert, i, j;

  	extra_spaces = MAX_LINE_LEN - line_len;
	int fuckyou;
		for (i = 0; i < line_len; i++) {
			//if line[i] does equal a space, write the character
    			if (line[i] != ' ')
      				putchar(line[i]);
		        else {
				spaces_to_insert = extra_spaces / (num_words - 1);

				//Increasing space_to_insert makes space favour the right end of a sentence in regards to spacing. 
				if(right_space_weighting == true && extra_spaces > 0)
					spaces_to_insert++;

				for (j = 1; j <= spaces_to_insert + 1; j++)
					putchar(' ');
				extra_spaces -= spaces_to_insert;

				num_words--;

			}
  		}

	printf("\n");
}

void flush_line(void)
{
  if (line_len > 0)
    puts(line);
}
