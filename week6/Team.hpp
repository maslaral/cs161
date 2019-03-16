/***********************************************
** Author: Alex Maslar
** Date: February 11, 2019
** Description: This implements the team class
   that represents the players and their positions
   on the team. It also declares a method for
   calculating the total points scored for a team.
***********************************************/

// defining team classes and functions
#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team
{
  private:
    Player pointGuard;
    Player shootingGuard;
    Player smallForward;
    Player powerForward;
    Player center;

  public:
    Team(Player pg, Player sg, Player sf, Player pf, Player c);
    // getters
    Player getPointGuard();
    Player getShootingGuard();
    Player getSmallForward();
    Player getPowerForward();
    Player getCenter();
    //setters
    void setPointGuard(Player);
    void setShootingGuard(Player);
    void setSmallForward(Player);
    void setPowerForward(Player);
    void setCenter(Player);
    // function to return total points
    int totalPoints();
};

#endif
