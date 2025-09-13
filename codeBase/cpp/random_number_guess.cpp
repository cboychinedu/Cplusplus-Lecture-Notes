// Including the header files
#include <iostream>
#include <string>

// Using the standard namespace libary
using namespace std;

// Running the main function
int main()
{
    // Creating a variable of the int data type to hold the guessed number
    int random_number = 23;
    int guessed_number;

    // Creating a do-while loop to make a check and ask the user for guesses.
    do {
        // Asking for the user input
        std::cout << "Guess the random number from 0 to 30: ";
        std::cin >> guessed_number;

    } while ( random_number != guessed_number );

    // Checking if the random_number guessed is equals to the guessed_number
    if ( random_number == guessed_number )
    {
        // Execute this block of code if the condition is met above
        std::cout << "Oh yes, you guess the right number. \n";
    }
    // Closing the program
    return 0;
}
