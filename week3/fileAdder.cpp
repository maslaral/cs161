//This program takes a file specified by the
//user and sums the integers in the file
//and saves the value to another text file

#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::string;

int main ()
{
    string nameFromUser;
    int fileInteger,
        total = 0;

    //prompt the user to enter the file name
    cout << "Please enter your filename.\n";
    cin >> nameFromUser;

    ifstream inputFile(nameFromUser);

    //check if the input file is there, if not return 
    //error, if it is then save the total to the output
    //file
    if (inputFile)
    {
        while (inputFile >> fileInteger)
        {   
            total += fileInteger;
        }
       
        //close the input file
        //
        inputFile.close();

        //create the output file, save the total,
        //and close it

        ofstream outputFile;
        outputFile.open("sum.txt");
        outputFile << total;
        outputFile.close();

        cout << "result written to sum.txt\n";
    }
    else
    {
        cout << "could not access file\n";
    }
    return 0;
}

