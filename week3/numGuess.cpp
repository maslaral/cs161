#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //intializing the variables
    int target,
        guess,
        counter;

    //get the target number to guess
    cout << "Enter the number for the player to guess." << endl;
    cin >> target;

    //prompt user for guess
    cout << "Enter your guess." << endl;
    
    //setting the counter to 1
    counter = 0;

    //do-while loop to continue getting guesses until
    //correctly guessed
    do
    {
        cin >> guess;

        if (guess > target)
            cout << "Too high - try again." << endl;
        else if (guess < target)
            cout << "Too low - try again." << endl;
        else {}

        counter++;
    } while (guess != target);

    //outputs the number of tries it took to guess correctly
    cout << "You guessed it in " << counter << " tries." << endl;

    return 0;
}
