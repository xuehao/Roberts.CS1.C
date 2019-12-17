/*
 * File: inchtocm.c
 * ----------------
 * This program reads in a length given in inches and converts it
 * to its metric equivalent in centimeters.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  double inch, cm;

  printf("This program converts inches to centimeters.\n");
  printf("Length in inches? ");
  inch = GetReal();
  cm = inch * 2.54;
  printf("%g in = %g cm\n", inch, cm);
}
