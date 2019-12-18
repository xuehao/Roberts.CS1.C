/*
 * File: add10.c
 * -------------
 * This program adds a list of ten numbers, printing
 * the total at the end.  Instead of reading the numbers
 * into separate variables, this program reads in each
 * number and adds it to a running total.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  int i, value, total;

  printf("This program adds a list of ten numbers.\n");
  total = 0;
  for (i = 0; i < 10; i++) {
    printf(" ? ");
    value = GetInteger();
    total += value;
  }
  printf("The total is %d\n", total);
}
