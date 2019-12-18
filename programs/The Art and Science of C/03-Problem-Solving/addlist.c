/*
 * File: addlist.c
 * ---------------
 * This program adds a list of numbers.  The end of the
 * input is indicated by entering 0 as a sentinel value.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  int value, total;

  printf("This program adds a list of numbers.\n");
  printf("Signal end of list with a 0.\n");
  total = 0;
  while (TRUE) {
    printf(" ? ");
    value = GetInteger();
    if (value == 0)
      break;
    total += value;
  }
  printf("The total is %d\n", total);
}
