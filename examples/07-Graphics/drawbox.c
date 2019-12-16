/*
 * File: drawbox.c
 * ---------------
 * This program draws a box on the screen.
 */

#include <stdio.h>

#include "genlib.h"
#include "graphics.h"

/* Function prototypes */

void
DrawBox(double x, double y, double width, double height);

/* Main program */

int
main()
{
  InitGraphics();
  DrawBox(0.5, 0.5, 1.0, 1.0);
}

/*
 * Function: DrawBox
 * Usage: DrawBox(x, y, width, height)
 * -----------------------------------
 * This function draws a rectangle of the given width and
 * height with its lower left corner at (x, y).
 */

void
DrawBox(double x, double y, double width, double height)
{
  MovePen(x, y);
  DrawLine(0, height);
  DrawLine(width, 0);
  DrawLine(0, -height);
  DrawLine(-width, 0);
}
