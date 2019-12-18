/*
 * File: balance1.c
 * ----------------
 * This file contains the first version of a program to
 * balance a checkbook.  The user enters checks and deposits
 * throughout the month (checks are entered as negative
 * numbers).  The end of the input is indicated by entering
 * 0 as a sentinel value.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  double entry, balance;

  printf("This program helps you balance your checkbook.\n");
  printf("Enter each check and deposit during the month.\n");
  printf("To indicate a check, use a minus sign.\n");
  printf("Signal the end of the month with a 0 value.\n");
  printf("Enter the initial balance: ");
  balance = GetReal();
  while (TRUE) {
    printf("Enter check (-) or deposit: ");
    entry = GetReal();
    if (entry == 0)
      break;
    balance += entry;
    printf("Current balance = %g\n", balance);
  }
  printf("Final balance = %g\n", balance);
}
