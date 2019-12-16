/*
 * File: drawcbox.c
 * ----------------
 * Program to draw a centered box.
 */

#include <stdio.h>

#include "genlib.h"
#include "graphics.h"

/* Function prototypes */

void
DrawBox(double x, double y, double width, double height);
void
DrawCenteredBox(double x, double y, double width, double height);

/* Main program */

int
main()
{
  double cx, cy;

  InitGraphics();
  cx = GetWindowWidth() / 2;
  cy = GetWindowHeight() / 2;
  DrawCenteredBox(cx, cy, 2.0, 1.0);
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

/*
 * Function: DrawCenteredBox
 * Usage: DrawCenteredBox(x, y, width, height)
 * -------------------------------------------
 * This function draws a rectangle of the given width and
 * height with its center at (x, y).
 */

void
DrawCenteredBox(double x, double y, double width, double height)
{
  DrawBox(x - width / 2, y - height / 2, width, height);
}
