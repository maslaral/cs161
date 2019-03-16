/******************************************************
** Author: Alex Maslar
** Date: 2/19/19
** Description: Function that takes an array and it's
   size as the two arguments. It first sorts the array
   and then it finds the median. If the median is odd,
   it takes the array size and divides it by two
   to find the middle value (because the array starts
   at 0 this will work without manipulation). If the 
   median is even,it finds the two middle values and
   adds them together and divides by 2 to find their
   average. 
******************************************************/

#include<algorithm>

double findMedian(int values[], int arraySize)
{
    int medianLocation,
        medianLocation1,
        medianLocation2;
    double median;

    //sorts the array in order to find the median
    std::sort(values, values + arraySize);

    //checks if the array size is odd - if so, 
    //it calculates the median for that array
    if (arraySize % 2 != 0)
    {
      medianLocation = arraySize / 2; 
      median = values[medianLocation];
    } 
    //finds the median of an even array
    else
    {
      medianLocation1 = arraySize / 2;
      medianLocation2 = medianLocation1 - 1;
      median = (values[medianLocation1] + values[medianLocation2]) / 2.0;
    }
    return median;
}
