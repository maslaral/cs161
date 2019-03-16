/*************************************************************
** Author: Alex Maslar
** Date: February 25, 2019
** Description: Function that takes three integer pointers as
   it's argument and sorts them by their values from smallest
   to largest. It uses temp variables to help swap the order
   as it evaluates the different conditions of the function.
*************************************************************/

/*
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void smallSort2(int *, int *, int *);

int main()
{
  int first = 14;
  int second = -90;
  int third = 2;
  
  smallSort2(&first, &second, &third);
  cout << first << ", " << second << ", " << third << endl;
  
  return 0;
}
*/

void smallSort2(int *first, int *second, int *third)
{
  int temp;   // intialize the temp variable

  // checks the value in the address the pointer references
  // in first and compares to second - switches if true
  if (*first >= *second)
  {
    temp = *first;
    *first = *second;
    *second = temp;
  }

  // checks the value in the address the pointer references
  // in second and compares to third - switches if true
  if (*second >= *third)
  {
    temp = *second;
    *second = *third;
    *third = temp;
  }

  // checks the value in the address the pointer references
  // in first and compares to second - switches if true
  if (*first >= *second)
  {
    temp = *first;
    *first = *second;
    *second = temp;
  }
}

