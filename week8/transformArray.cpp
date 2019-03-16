/**************************************************
** Author: Alex Maslar
** Date: February 27, 2019
** Description: function that takes a pointer to
   an array and the array size as the argument
   and intializes a new array twice the size with
   the original values and 2 times original values.
**************************************************/

/*
#include <iostream>
using std::cout;
using std::endl;
*/

void transformArray(int* &array, int arraySize)
{
  // dynamically allocate an array twice the size
  // as the array passed into the function
  int *newArray = new int[arraySize * 2];

  // assign the new array with the original values
  // first and then the two times values
  for (int i = 0; i < arraySize; i++)
  {
    newArray[i] = array[i];
    newArray[arraySize + i] = array[i] * 2;
  }

  array = newArray;   // assigns new to original
  newArray = nullptr;    // clears the memory
  delete [] newArray; // no longer needed
}

/*
int main()
{
  int *myArray = new int[3];
  myArray[0] = 4;
  myArray[1] = 2;
  myArray[2] = 5;

  transformArray(myArray, 3);

  for (int i =0; i<6; i++)
    cout << myArray[i] << endl;
  
  delete [] myArray;

  return 0;
}
*/
