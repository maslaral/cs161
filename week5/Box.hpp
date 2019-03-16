/*************************************************************
** Author: Alex Maslar
** Date: February 6, 2019
** Description: This implements a class that represents a Box
   with height, width, and length values and has methods for
   calculating volume and surface area.
*************************************************************/

// defining box classes and functions
#ifndef BOX_HPP
#define BOX_HPP

class Box
{
  private:
    double height;
    double width;
    double length;

  public:
    Box();
    Box(double h, double w, double l);
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    double calcVolume();
    double calcSurfaceArea();
};

#endif
