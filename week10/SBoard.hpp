/**************************************************************************
** Author: Alex Maslar
** Date: March 13, 2019
** Description: This implements the SBoard class that represents the game
                board and the number of tokens placed on the board. It also
                includes methods to place tokens and read token placements
                from file. 
**************************************************************************/
#ifndef SBOARD_HPP
#define SBOARD_HPP

class SBoard
{
  private:
    // game board
    char* board;
    // keeps track of the number of tokens on the board
    int numTokens;
  public:
    // default constructor
    SBoard();
    // getters
    int getNumTokens();
    // places token
    int placeToken(int, int);
    // reads from file
    void readPlacementsFromFile(const char*);
    // prints the array
    void print();
};

#endif


