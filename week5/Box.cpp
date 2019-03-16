/********************************************************
** Author: Alex Maslar
** Date: February 6, 2019
** Description: This defines the functions used to set
   height, width, and length and to calculate the volume
   and surface area. It also sets a default constructor
   so the default dimensions are 1 if no data is entered.
********************************************************/ 

// creating functions and constructors
#include "Box.hpp"

// default constructor
Box::Box()
{
  height = 1.0;
  width = 1.0;
  length = 1.0;
}

// constructor that takes the dimensions
Box::Box(double h, double w, double l)
{
  height = h;
  width = w;
  length = l;
}

void Box::setHeight(double h)
{
  height = h;
}

void Box::setWidth(double w)
{
  width = w;
}

void Box::setLength(double l)
{
  length = l;
}

double Box::calcVolume()
{
  return height * width * length;
}

double Box::calcSurfaceArea()
{
  return (2 * (height * width)) + (2 * (height * length)) + (2 * (width * length));
}
