/*
 * File: dicetest.c
 * ----------------
 * This program simulates rolling a die.
 */

#include <stdio.h>

#include "genlib.h"
#include "random.h"

/*
 * Constants
 * ---------
 * NTrials -- Number of trials
 */

#define NTrials 10

/* Function prototypes */

int
RollDie(void);

/* Main program */

int
main()
{
  int i;

  for (i = 0; i < NTrials; i++) {
    printf("%d\n", RollDie());
  }
}

/*
 * Function: RollDie
 * Usage: die = RollDie();
 * -----------------------
 * This function generates and returns a random integer in the
 * range 1 to 6, representing the roll of a six-sided die.
 */

int
RollDie(void)
{
  return (RandomInteger(1, 6));
}
