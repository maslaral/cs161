/***************************************
** Author: Alex Maslar
** Date: March 5, 2019
** Description: This implements the
   LineSegment class that represents the
   end points of the line and defines 
   methods to calculate length and slope
   of the line.
****************************************/ 

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{
  private:
    Point endPoint1;
    Point endPoint2;

  public:
    LineSegment(Point*, Point*);
    // getters
    Point getEnd1();
    Point getEnd2();
    // setters
    void setEnd1(int*);
    void setEnd2(int*);
    // length function
    double length();
    double slope();
};

#endif
