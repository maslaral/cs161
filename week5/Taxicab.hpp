/***************************************************
** Author: Alex Maslar
** Date: February 6, 2019
** Description: This implements the taxi cab class 
   that represents the x and y coordinates of the 
   taxi cab and the total distance travelled. It
   also declares methods for moving the taxi cab
   horizontally and/or vertically and for finding
   the total distance travelled. 
***************************************************/

// defining taxi cab classes and functions
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
  private:
    int coordX;
    int coordY;
    int totalDistance;

  public:
    Taxicab();
    Taxicab(int x, int y);
    
    // getters
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();

    // functions
    int moveX(int horizontalMove);
    int moveY(int vericalMove);
};

#endif
