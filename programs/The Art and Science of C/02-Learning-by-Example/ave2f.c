/*
 * File: ave2f.c
 * -------------
 * This program reads in two floating-point numbers and
 * computes their average.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  double n1, n2, average;

  printf("This program averages two floating-point numbers.\n");
  printf("1st number? ");
  n1 = GetReal();
  printf("2nd number? ");
  n2 = GetReal();
  average = (n1 + n2) / 2;
  printf("The average is %g\n", average);
}
