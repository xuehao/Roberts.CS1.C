/*
 * File: balance4.c
 * ----------------
 * This file contains the final version of a program to
 * balance a checkbook.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

/*
 * Constant: BouncedCheckFee
 * -------------------------
 * To change the charge assessed for bounced checks, change
 * the definition of this constant.  The constant must be a
 * floating-point value (i.e., must contain a decimal point).
 */

#define BouncedCheckFee 10.00

/* Main program */

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
    if (entry < 0 && balance < 0) {
      printf("This check bounces.  $%.2f fee deducted.\n", BouncedCheckFee);
      balance -= BouncedCheckFee;
    }
    printf("Current balance = %.2f\n", balance);
  }
  printf("Final balance = %.2f\n", balance);
}
