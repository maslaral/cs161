/**************************************
** Author: Alex Maslar
** Date: March 5, 2019
** Description: This implements the point
   class that represents the x and y 
   coordinates of the point and declares
   a method to calculate the distance
   between two points.
***************************************/

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
  private:
    double xCoord;
    double yCoord;

  public:
    // default constructor
    Point();
    Point(double xCoord, double yCoord);
    // getters
    double getXCoord();
    double getYCoord();
    // setters
    void setXCoord(double);
    void setYCoord(double);
    // function that finds distance between
    double distanceTo(Point);
};

#endif
