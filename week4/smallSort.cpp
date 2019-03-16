/*************************************************************
** Author: Alex Maslar
** Date: 1/28/19
** Description: Assignment 4b. Small Sort
*************************************************************/

/*
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void smallSort(int &first, int &second, int &third);

int main()
{
    int first = 43;
    int second = 66;
    int third = -4;

    smallSort(first, second, third);
    cout << first << ", " << second << ", " << third << endl;
    return 0;
}
*/

//function references the first, second, and third variables
//set in the int main
void smallSort(int &first, int &second, int &third)
{
    //setting temporary variables to help with
    //swapping the order
    int tempFirst,
        tempSecond,
        tempThird;

    //evaluating if the first is greater than
    //the second and will swap them if true
    if (first >= second)
    {
        tempFirst = first;
        tempSecond = second; 
        first = tempSecond;
        second = tempFirst;
    }

    //evaluating if the second is greater than
    //the third and will swap the if true
    if (second >= third)
    {
        tempSecond = second;
        tempThird = third;
        second = tempThird;
        third = tempSecond;
    }

    //once again, evaluating if first greater
    //than second. because things may have changed
    //depending on step second if statemt,
    //this may evaluate differently
    if (first >= second)
    {
        tempFirst = first;
        tempSecond = second;
        first = tempSecond;
        second = tempFirst;
    }
}

