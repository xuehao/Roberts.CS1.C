/*
 * File: balance3.c
 * ----------------
 * This file contains a corrected version of a program to
 * balance a checkbook, including a working bounced-check
 * feature.
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
    if (balance < 0 && entry < 0) {
      printf("This check bounces.  $10 fee deducted.\n");
      balance -= 10;
    }
    printf("Current balance = %g\n", balance);
  }
  printf("Final balance = %g\n", balance);
}
