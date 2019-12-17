/*
 * File: drawcirc.c
 * ----------------
 * Program to draw a complete circle.
 */

#include <stdio.h>

#include "genlib.h"
#include "graphics.h"

/* Function prototypes */

void
DrawCenteredCircle(double x, double y, double r);

/* Main program */

int
main()
{
  InitGraphics();
  DrawCenteredCircle(1.0, 1.0, 0.5);
}

/*
 * Function: DrawCenteredCircle
 * Usage: DrawCenteredCircle(x, y, r);
 * -----------------------------------
 * This function draws a circle of radius r with its
 * center at (x, y).
 */

void
DrawCenteredCircle(double x, double y, double r)
{
  MovePen(x + r, y);
  DrawArc(r, 0, 360);
}
