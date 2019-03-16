/***********************************************
** Author: Alex Maslar
** Date: February 11, 2019
** Description: This defines the member 
   functions used to assign players to positions
   on a team and use those positions to get 
   player stats. In addition, there's a method 
   to calculate the total points.
***********************************************/

#include "Player.hpp"
#include "Team.hpp"

/***********************************************
** Description: Constructor that assigns players
   to each position on the team.
***********************************************/

Team::Team(Player pg, Player sg, Player sf, Player pf, Player c)
{
  pointGuard = pg;
  shootingGuard = sg;
  smallForward = sf;
  powerForward = pf;
  center = c;
}

Player Team::getPointGuard()
{
  return pointGuard;
}

Player Team::getShootingGuard()
{
  return shootingGuard;
}

Player Team::getSmallForward()
{
  return smallForward;
}

Player Team::getPowerForward()
{
  return powerForward;
}

Player Team::getCenter()
{
  return center;
}

void Team::setPointGuard(Player pg)
{
  pointGuard = pg;
}

void Team::setShootingGuard(Player sg)
{
  shootingGuard = sg;
}

void Team::setSmallForward(Player sf)
{
  smallForward = sf;
}

void Team::setPowerForward(Player pf)
{
  powerForward = pf;
}

void Team::setCenter(Player c)
{
  center = c;
}

/***********************************************
** Description: Function that returns the total
   number of points on the team by adding 
   together the points for each position on 
   the team.
***********************************************/

int Team::totalPoints()
{
  return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
}
