// Program to find the number of coins to return

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main ()
{
	int userChange, quarter, dime, nickel, penny;
	
	// Get total amount of change
	cout << "Please enter an amount in cents less than a dollar.\n";
	cin >> userChange;
	
	// Calculate total number of coins
	quarter = userChange / 25;
	dime = (userChange % 25) / 10;
	nickel = ((userChange % 25) % 10) / 5;
	penny = ((userChange % 25) % 10) % 5;

	cout << "Your change will be:\n";
	cout << "Q: " << quarter << endl;
	cout << "D: " << dime << endl;
	cout << "N: " << nickel << endl;
	cout << "P: " << penny << endl; 

	return 0;
}
