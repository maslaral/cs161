/**************************************************
 ** Author: Alex Maslar
 ** Date: 1/28/19
 ** Description: Assignment 4a. Fall distance
**************************************************/

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

//function prototype
//float fallDistance(float time, float grams = 9.8);

/*
int main()
{
    float time;
    cin >> time;
    float distance = fallDistance(time);
    cout << distance << endl;
    return 0;
}
*/

//function call
float fallDistance (float time)
{
    return pow(time,2) * 9.8 * .5;
}
