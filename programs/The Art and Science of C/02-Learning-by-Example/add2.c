/*
 * File: add2.c
 * ------------
 * This program reads in two numbers, adds them together,
 * and prints their sum.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  int n1, n2, total;

  printf("This program adds two numbers.\n");
  printf("1st number? ");
  n1 = GetInteger();
  printf("2nd number? ");
  n2 = GetInteger();
  total = n1 + n2;
  printf("The total is %d.\n", total);
}
