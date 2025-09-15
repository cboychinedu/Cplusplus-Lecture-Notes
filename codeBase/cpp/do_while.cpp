// Including the header files
#include <iostream>
#include <string>

// Using the standard namespace library
using namespace std;

// Running the main function
int main()
{
    // Using the "cin.get(char)" module
    char ch;
    int count = 0;
    const int SIZE = 20;

    // Using the do-while loop
    do
    {
        // Execute this block of code
        // Asking for the characters
        cout << "Enter the characters: ";

        // Saving the user's characters
        cin.get(ch, SIZE).get();

        // Displaying the user's characters and incrementing the count
        // Value by one.
        cout << "You typed the following: " << ch << endl;
        count ++;

    } while ( ch != '#');

    /*
    // Creating an array to hold a double value
    double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};

    // Displaying each individual elements of the array separately.
    for ( double x : prices )
    {
        // creating a floating point variable to hold new calculated values
        int calVal = int(x) * 2;    // Just used type cast here

        // Displaying the elements.
        std::cout << calVal << std::endl;

    }

    */

    // Closing the program
    return 0;
}
