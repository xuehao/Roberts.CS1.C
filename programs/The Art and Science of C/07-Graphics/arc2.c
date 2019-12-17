/*
 * File: arc2.c
 * ------------
 * This program is the second test of the DrawArc function
 * and draws a left semicircle.
 */

#include <stdio.h>

#include "genlib.h"
#include "graphics.h"

int
main()
{
  InitGraphics();
  MovePen(1.0, 1.5);
  DrawArc(0.5, 90, 180);
}
