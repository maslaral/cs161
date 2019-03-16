// Assignment 2b - Convert from Celsius to Farenheit

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main ()
{
	double valueCelsius, valueFahrenheit;

	// Get the user input
	cout << "Please enter a Celsius temperature.\n";
	cin >> valueCelsius;

	// Convert user entry from Celsius to Fahrenheit
	valueFahrenheit = ((9.0/5.0) * valueCelsius) + 32.0; 
	cout << "The equivalent Fahrenheit temperature is:\n" << valueFahrenheit << endl;
	return 0;
}
