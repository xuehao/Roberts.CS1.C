/*
 * File: greeting.c
 * ----------------
 * This program prints a more personal greeting than did
 * the original "Hello, world." program by reading in the
 * name of the user.
 */

#include <stdio.h>

#include "genlib.h"
#include "simpio.h"

int
main()
{
  string user;

  printf("What is your name? ");
  user = GetLine();
  printf("Hello, %s.\n", user);
}
