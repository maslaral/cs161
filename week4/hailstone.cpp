/******************************************************
** Author: Alex Maslar
** Date: 1/28/19
** Description: Assignment 4c. Hailstone
******************************************************/

/*
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int hailstone(int userInput);

int main()
{
    int inputValue,
        numberOfLoops;

    cout << "Enter an integer value\n";
    cin >> inputValue;

    numberOfLoops = hailstone(inputValue);

    cout << numberOfLoops << endl;

    return 0;
}
*/

int hailstone(int userInput)
{
    //intializing the counter outside of the
    //for loop so I can reference it in the return
    int counter = 0;

    //for loop that takes the userInput and performs
    //hailstone sequence until equals 1
    for (int hailstoneNumber = userInput; hailstoneNumber != 1; counter++)
    {
      if (hailstoneNumber % 2 == 0)
      {
        hailstoneNumber /= 2;
      }
      else
        hailstoneNumber = (hailstoneNumber * 3) + 1;
    }
    return counter;
}
