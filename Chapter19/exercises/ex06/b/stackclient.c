/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* stackclient.c (Chapter 19, page 494) */

#include <stdio.h>
#include "stackADT2.h"

int main(void)
{
  Stack s1, s2;
  int n;

  s1 = create(5);
  s2 = create(5);

  push(s1, 67);
  push(s1, 98);

  printf("Peeked %d from s1\n", peek(s1));

  n = pop(s1);
  printf("Popped %d from s1\n", n);
  push(s2, n);
  
  printf("Peeked %d from s2\n", peek(s2));
  n = pop(s1);

  printf("Popped %d from s1\n", n);
  push(s2, n);

  destroy(s1);

  while (!is_empty(s2))
    printf("Popped %d from s2\n", pop(s2));

  push(s2, 3);
  make_empty(s2);
  if (is_empty(s2))
    printf("s2 is empty\n");
  else
    printf("s2 is not empty\n");

  destroy(s2);

  return 0;
}
