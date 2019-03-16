/***************************************
** Author: Alex Maslar
** Date: March 5, 2019
** Description: Contains functions that 
   get the x and y coordinates of a point,
   and calculate the distance to another
   point based on those coordinates.
***************************************/

#include "Point.hpp"
#include<cmath>

// default constructor set equal to 0
Point::Point()
{
  setXCoord(0.0);
  setYCoord(0.0);
}

Point::Point(double x, double y)
{
  setXCoord(x);
  setYCoord(y);
}

// setter function
void Point::setXCoord(double x)
{
  xCoord = x;
}

// setter function
void Point::setYCoord(double y)
{
  yCoord = y;
}

// getter function
double Point::getXCoord()
{
  return xCoord;
}

// getter function
double Point::getYCoord()
{
  return yCoord;
}

/***************************************
** Description: Function that calculates
   the distance between two points by
   taking the difference between x and 
   y coordinates to the power of 2,
   finding the sum of those values, and
   finding the square root of that sum.
***************************************/

double Point::distanceTo(Point compPointer)
{
  // declaring temp variables for the equation
  double  tempX,
          tempY,
          distance;

  // find the distance between the comparable
  // point and the point
  tempX = pow((compPointer.getXCoord() - getXCoord()), 2.0);
  tempY = pow((compPointer.getYCoord() - getYCoord()), 2.0);
  distance = std::sqrt(tempX + tempY);
  return distance; 
}
