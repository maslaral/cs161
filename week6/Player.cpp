/***********************************************
** Author: Alex Maslar
** Date: February 11, 2019
** Description: This defines the member 
   functions used to set the players and their
   stats. It includes functions to get the 
   player stats. In addition, there's a 
   comparison method which compares the player 
   with a player specified in the method argument 
   and returns a true if the player has more 
   points than the player entered in the 
   argument.
***********************************************/

#include "Player.hpp"
#include<string>

using std::string;

/***********************************************
** Description: Sets default values for the 
   player to indicate if there's an error - it 
   will be easy to see that -100 points is an
   incorrect value in your output 
***********************************************/ 
Player::Player()
{
  playerName = "";
  points = -100;
  rebounds = -100;
  assists = -100;
}

/***********************************************
** Description: Constructor for creating a 
   player and setting their stats including 
   points, rebounds, and assists
***********************************************/

Player::Player(string n, int p, int r, int a)
{
  playerName = n;
  points = p;
  rebounds = r;
  assists = a;
}

string Player::getName()
{
  return playerName;
}

int Player::getPoints()
{
  return points;
}

int Player::getRebounds()
{
  return rebounds;
}

int Player::getAssists()
{
  return assists;
}

void Player::setPoints(int p)
{
  points = p;
}

void Player::setRebounds(int r)
{
  rebounds = r;
}

void Player::setAssists(int a)
{
  assists = a;
}

/***********************************************
** Description: This checks if the player called
   in the function has more points than the
   player in the argument. If the function is 
   true than it simply returns a boolean value 
   true. If false, it returns a false boolean 
   value.
***********************************************/

bool Player::hasMorePointsThan(Player p2)
{
  if (getPoints() > p2.getPoints())
    return true;
  else
    return false;
}
