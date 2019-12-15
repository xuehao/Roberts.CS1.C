/*
 * File: add2f.c
 * -------------
 * This program reads in two floating-point numbers, adds them
 * together, and prints their sum.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  double n1, n2, total;

  printf("This program adds two floating-point numbers.\n");
  printf("1st number? ");
  n1 = GetReal();
  printf("2nd number? ");
  n2 = GetReal();
  total = n1 + n2;
  printf("The total is %g\n", total);
}
