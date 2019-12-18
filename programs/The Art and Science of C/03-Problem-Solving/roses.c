/*
 * File: roses.c
 * -------------
 * This program prints out the Gertrude Stein quotation
 * "a rose is a rose is a rose".
 */

#include <stdio.h>

#include "genlib.h"

int
main()
{
  int i;

  for (i = 0; i < 2; i++) {
    printf("a rose is ");
  }
  printf("a rose.\n");
}
