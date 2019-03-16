/*******************************************************
** Author: Alex Maslar
** Date: February 20, 2019
** Description: Function that calculates the standard
   deviation of the ages in the person array. It
   calculates in phases for code readability. First,
   finding the total of the ages in the array. Then,
   it finds the average by dividing by the array's size.
   Next it subtracts the average from each age, squares
   them, and adds them up. Finally it calculates the
   standard deviation by taking the square root of the
   differences divided by the array size. 
*******************************************************/

// including math for sqrt function and person.hpp 
// because it references the person objects
#include<cmath>
#include "Person.hpp"

double stdDev(Person array[], int arraySize)
{
    // initializing the sum value
    double totalSqDiff = 0,
           stdDev = 0,
           sum = 0;

    // adding up the ages  
    for (int i = 0; i < arraySize; i++)
    {
      sum += array[i].getAge();
    }

    // calculates the average of ages
    double average = sum / arraySize;

    // subtracts the average from each age and then adds them up
    for (int i = 0; i < arraySize; i++)
    {
      double sqDiff = (array[i].getAge() - average) * (array[i].getAge() - average);
      totalSqDiff += sqDiff; 
    }
    
    // finds the standard deviation and returns it
    return stdDev = sqrt(totalSqDiff / arraySize);
}
