/*
 * File: count10.c
 * ---------------
 * This program counts from 1 to 10, displaying each number
 * on the screen.
 */

#include <stdio.h>

#include "genlib.h"

int
main()
{
  int i;

  for (i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }
}
