/*********************************************************
** Author: Alex Maslar
** Date: February 6, 2019
** Description: This defines the member functions used to 
   calculate the total distance traveled (based on the sum
   of the absolute values move) and to return the x and y
   coordinates of the taxi cab.
*********************************************************/

// creating functions and constructors
#include "Taxicab.hpp"
#include <cmath>

// default constructor set equal to 0
Taxicab::Taxicab()
{
  coordX = 0;
  coordY = 0;
  totalDistance = 0;
}

Taxicab::Taxicab(int x, int y)
{
  coordX = x;
  coordY = y;
  totalDistance = 0;
}

int Taxicab::getXCoord()
{
  return coordX;
}

int Taxicab::getYCoord()
{
  return coordY;
}

int Taxicab::moveX(int horizontalMove)
{
  coordX += horizontalMove;
  totalDistance += std::abs(horizontalMove);
}

int Taxicab::moveY(int verticalMove)
{
  coordY += verticalMove;
  totalDistance += std::abs(verticalMove);
}

int Taxicab::getDistanceTraveled()
{
  return totalDistance;
}
