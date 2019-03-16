//Program that finds the minimum maximum
//of a set values (the number which is defined
//by the user.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main ()
{ 	
    int minimum,
        maximum, 
        temp,
        inputNumber;

    //Get the number of integers the user wants to enter
    cout << "How many integers would you like to enter?\n";
    cin >> inputNumber;

    cout << "Please enter " << inputNumber << " integers.\n";

    int counter = 1;

    //While statement that checks if a min, max, or nothing
    while (counter <= inputNumber)
    {
        cin >> temp;
        if (counter == 1)
        {
            minimum = temp;
            maximum = temp;
        }
        else if (temp < minimum)
        {  
            minimum = temp;
        }
        else if (temp > maximum)
        {
            maximum = temp;
        }
        else {}

        counter++;
    }    

    //Prints out the minimum and maximum
    cout << "min: " << minimum << endl;
    cout << "max: " << maximum << endl;

    return 0;
}

