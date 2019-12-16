/*
 * File: arc1.c
 * ------------
 * This program is the first test of the DrawArc function
 * and draws a complete circle.
 */

#include <stdio.h>

#include "genlib.h"
#include "graphics.h"

int
main()
{
  InitGraphics();
  MovePen(1.5, 1.0);
  DrawArc(0.5, 0, 360);
}
