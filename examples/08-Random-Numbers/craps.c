/*
 * File: craps.c
 * -------------
 * This program plays the dice game called craps.  For a discussion
 * of the rules of craps, please see the GiveInstructions function.
 */

#include <stdio.h>

#include "genlib.h"
#include "random.h"
#include "simpio.h"
#include "strlib.h"

/* Function prototypes */

void
GiveInstructions(void);
void
PlayCrapsGame(void);
int
RollTwoDice(void);
bool
GetYesOrNo(string prompt);

/* Main program */

int
main()
{
  Randomize();
  if (GetYesOrNo("Would you like instructions? ")) {
    GiveInstructions();
  }
  while (TRUE) {
    PlayCrapsGame();
    if (!GetYesOrNo("Would you like to play again? "))
      break;
  }
}

/*
 * Function: GiveInstructions
 * Usage: GiveInstructions();
 * -----------------------
 * This function welcomes the player to the game and gives
 * instructions on the rules to craps.
 */

void
GiveInstructions(void)
{
  printf("Welcome to the craps table!\n\n");
  printf("To play craps, you start by rolling a pair of dice\n");
  printf("and looking at the total.  If the total is 2, 3, or\n");
  printf("12, that's called 'crapping out' and you lose.  If\n");
  printf("you roll a 7 or an 11, that's called a 'natural' and\n");
  printf("you win.  If you roll any other number, that number\n");
  printf("becomes your 'point' and you keep on rolling until\n");
  printf("you roll your point again (in which case you win)\n");
  printf("or a 7 (in which case you lose).\n");
}

/*
 * Function: PlayCrapsGame
 * Usage: PlayCrapsGame();
 * -----------------------
 * This function plays one game of craps.
 */

void
PlayCrapsGame(void)
{
  int total, point;

  printf("\nHere we go!\n");
  total = RollTwoDice();
  if (total == 7 || total == 11) {
    printf("That's a natural.  You win.\n");
  } else if (total == 2 || total == 3 || total == 12) {
    printf("That's craps.  You lose.\n");
  } else {
    point = total;
    printf("Your point is %d.\n", point);
    while (TRUE) {
      total = RollTwoDice();
      if (total == point) {
        printf("You made your point.  You win.\n");
        break;
      } else if (total == 7) {
        printf("That's a seven.  You lose.\n");
        break;
      }
    }
  }
}

/*
 * Function: RollTwoDice
 * Usage: total = RollTwoDice();
 * -----------------------------
 * This function rolls two dice and returns their sum.  As part
 * of the implementation, the result is displayed on the screen.
 */

int
RollTwoDice(void)
{
  int d1, d2, total;

  printf("Rolling the dice . . .\n");
  d1 = RandomInteger(1, 6);
  d2 = RandomInteger(1, 6);
  total = d1 + d2;
  printf("You rolled %d and %d -- that's %d.\n", d1, d2, total);
  return (total);
}

/*
 * Function: GetYesOrNo
 * Usage: if (GetYesOrNo(prompt)) . . .
 * ------------------------------------
 * This function asks the user the question indicated by prompt
 * and waits for a yes/no response.  If the user answers "yes"
 * or "no", the program returns TRUE or FALSE accordingly.
 * If the user gives any other response, the program asks
 * the question again.
 */

bool
GetYesOrNo(string prompt)
{
  string answer;

  while (TRUE) {
    printf("%s", prompt);
    answer = GetLine();
    if (StringEqual(answer, "yes"))
      return (TRUE);
    if (StringEqual(answer, "no"))
      return (FALSE);
    printf("Please answer yes or no.\n");
  }
}
