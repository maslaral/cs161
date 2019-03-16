/* Assignment 2 Part A
 * Description: Design a program to find the average
 * of five numbers input by the user. */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main ()
{
	double userNumber1, userNumber2, userNumber3, userNumber4, userNumber5, userAverage;
	cout << "Please enter five numbers.\n";

	// Have the user input 5 random numbers
	cin >> userNumber1;
	cin >> userNumber2;
	cin >> userNumber3;
	cin >> userNumber4;
	cin >> userNumber5;
	
	// Compute the average of the 5 numbers
	userAverage = (userNumber1+userNumber2+userNumber3+userNumber4+userNumber5)/5;
	cout << "The average of those numbers is:\n" <<  userAverage << endl;
	return 0;
}
