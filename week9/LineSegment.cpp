/***********************************************
** Author: Alex Maslar
** Date: March 5, 2019
** Description: Contains functions to construct
   LineSegment objects, set end points of lines,
   calculate the length of the LineSegment, and
   calculate the slope by getting the end points
   x and y coordinates. 
***********************************************/

#include "LineSegment.hpp"

/***********************************************
** Description: Constructor for the LineSegment
   object that takes two pointer variables as
   the arguments to set the end points.
***********************************************/
LineSegment::LineSegment(Point *p1, Point *p2)
{
  setEnd1(*p1);
  setEnd2(*p2);
}

// getter function
Point LineSegment::getEnd1()
{
  return endPoint1;
}

// getter function
Point LineSegment::getEnd2()
{
  return endPoint2;
}

// setter function
void LineSegment::setEnd1(Point *p1)
{
  endPoint1 = *p1;
}

// setter function
void LineSegment::setEnd2(Point *p2)
{
  endPoint2 = *p2;
}

/***********************************************
** Description: Function that finds the length
   between two end points by calling the function 
   distanceTo from the Point class.
***********************************************/
double LineSegment::length()
{
    return endPoint1.distanceTo(endPoint2);
}

/***********************************************
** Description: Finds the slope of the line by
   getting the x and y coordinates from the 
   end points.
***********************************************/
double LineSegment::slope()
{
  double endPointX1 = endPoint1.getXCoord(),
         endPointX2 = endPoint2.getXCoord(),
         endPointY1 = endPoint1.getYCoord(),
         endPointY2 = endPoint2.getYCoord(),
         slope;

  slope = (endPointY2 - endPointY1) / (endPointX2 - endPointX1);

  return slope;
}
