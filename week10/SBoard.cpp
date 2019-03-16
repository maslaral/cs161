/**************************************************************************
** Author: Alex Maslar
** Date: March 13, 2019
** Description: SBoard functions that create a 10x10 gameboard, place 
                tokens on the board, keep track of the tokens placed, and
                checks the number of squares that were created on the
                board. 
**************************************************************************/

#include <iostream>
#include <fstream>
#include "SBoard.hpp"

/**************************************************************************
** Description: Default constructor for the board - initializes the board
                to a 10x10 array of char pointers. Each is assigned the
                char value . and the number of tokens placed is set to 0. 
**************************************************************************/
SBoard::SBoard()
{
  // initialize the number of tokens
  numTokens = 0;

  // initialize the array
  char board[10][10];
    
  // fill the board with the . character
  for (int count = 0; count < 10; count++)
    {
      for (int innerCount = 0; innerCount < 10; innerCount++)
        board[count][innerCount] = '.';
    }
}

/**************************************************************************
** Description: Getter function to return the number of tokens placed on
                the board. 
**************************************************************************/
int SBoard::getNumTokens()
{
  return numTokens;
}

/**************************************************************************
** Description: Prints the board and the tokens currently placed on the
                board. Used for troubleshooting. 
**************************************************************************/
void SBoard::print()
{
  for (int count = 0; count < 10; count++)
  {
    for (int innerCount = 0; innerCount < 10; innerCount++)
      std::cout << " " << board[count][innerCount];
    std::cout << std::endl;
  }
}

/**************************************************************************
** Description: Function that places the token on the board if it's in
                bounds and there isn't a token already there. It then 
                checks if the token made a square by dividing the board
                into four quadrants in relation to the point placed. The
                function returns the number of squares on the board. 
**************************************************************************/
int SBoard::placeToken(int x, int y)
{
  // initializing the total squares variable
  static int totalSquares = 0;

  // checks if the token placement is in bound
  if ((x < 0 || x > 10) || (y < 0 || y > 10))
    return -1;
  // checks if there's not already another token
  else if (board[x][y] == 'X')
    return -1;
  // checks each quadrant for a square
  else
  {
    numTokens ++;
    board[x][y] = 'X';
    // quadrant 1 - top right quadrant
    if (x > 0 && y < 9)
    {
      for (int count = 1; ((x - count >= 0) && (y + count < 10)); count++)
      {
        if (board[x - count][y] == 'X' && board[x - count][y + count] == 'X' && board[x][y + count] == 'X')
          totalSquares += 1;
      }
    }
    // quadrant 2 - bottom right quadrant
    if (x < 9 && y < 9)
    {
      for (int count = 1; ((x + count < 10) && (y + count < 10)); count++) 
      {
        if (board[x][y + count] == 'X' && board[x + count][y + count] == 'X' && board[x + count][y] == 'X')
          totalSquares += 1;
      }
    }
    // quadrant 3 - bottom left quadrant
    if (x < 9 && y > 0)
    {
      for (int count = 1; ((x + count < 10) && (y - count >= 0)); count++)
      {
        if (board[x + count][y] == 'X' && board[x + count][y - count] == 'X' && board[x][y - count] == 'X')
          totalSquares += 1;
      }
    }
    // quadrant 4 - top left quadrant
    if (x > 0 && y > 0)
    {
      for (int count = 1; ((x - count >= 0) && (y - count >= 0)); count ++)
      {
        if (board[x][y - count] == 'X' && board[x - count][y - count] == 'X' && board[x - count][y] == 'X')
          totalSquares += 1;
      }
    }
    return totalSquares;
  }
}

/**************************************************************************
** Description: Function that takes a file name as its argument and reads
                the file for array x and y values. It then takes those
                values and passes them into the placeTokens function. 
**************************************************************************/
void SBoard::readPlacementsFromFile(const char* file)
{
  std::ifstream inputFile;
  int x, y; 

  inputFile.open(file);
  
  while (inputFile >> x)  
  {
    inputFile >> y;
    placeToken(x,y);   
  }

  inputFile.close();
}
