/***********************************************
** Author: Alex Maslar
** Date: February 11, 2019
** Description: This implements the player class
   that represents the player name and their
   individual stats (such as points, rebounds,
   and assists). In addition, it declares a 
   method for comparing players points scored 
   and determining who has more points.
***********************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<string>

class Player
{
  private:
    std::string playerName;
    int points;
    int rebounds;
    int assists;

  public:
    Player();
    Player(std::string n, int p, int r, int a);
    // getters
    std::string getName();
    int getPoints();
    int getRebounds();
    int getAssists();
    // setters
    void setPoints(int);
    void setRebounds(int);
    void setAssists(int);
   // function that returns more points than
    bool hasMorePointsThan(Player);
};

#endif
