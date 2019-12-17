/*
 * File: cmtofeet.c
 * ----------------
 * This program reads in a length given in centimeters and converts
 * it to its English equivalent in feet and inches.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  double totalInches, cm, inch;
  int feet;

  printf("This program converts centimeters to feet and inches.\n");
  printf("Length in centimeters? ");
  cm = GetReal();
  totalInches = cm / 2.54;
  feet = totalInches / 12;
  inch = totalInches - feet * 12;
  printf("%g cm = %d ft %g in\n", cm, feet, inch);
}
