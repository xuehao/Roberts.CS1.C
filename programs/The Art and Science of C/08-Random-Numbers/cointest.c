/*
 * File: cointest.c
 * ----------------
 * This program simulates flipping a coin.
 */

#include <stdio.h>
#include <stdlib.h>

#include "genlib.h"

/*
 * Constants
 * ---------
 * NTrials -- Number of trials
 */

#define NTrials 10

/* Main program */

int
main()
{
  int i;

  for (i = 0; i < NTrials; i++) {
    if (rand() <= RAND_MAX / 2) {
      printf("Heads\n");
    } else {
      printf("Tails\n");
    }
  }
}
