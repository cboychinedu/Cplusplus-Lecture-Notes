// Including the header files
#include <iostream>
#include <string>
#include <climits>

// Using the standard namespace lib
using namespace std;

// Creating a function to check if the number is an integer or not
bool is_int(double x)
{
    // Checking using if/else statement
    if ( x <= INT_MAX && x >= INT_MIN )     // Using climits values
    {
        // Execute this block of code
        return true;
    }

    // Else block
    else
    {
        // Execute this block of code and return a bool type of false
        return false;
    }
}

// Running the main function
int main()
{
    // Creating a double variable
    double num;

    // Displaying and asking the user to enter an input
    std::cout << "Yo, dude! Enter an integer value: ";

    // Saving the value
    std::cin >> num;

    // Creating a while loop
    while ( !is_int(num) )
    {
        // Executing this block of code if the condition is met above
        std::cout << "Out of range -- please try again: ";
        std::cin >> num;

    }

    // Converting the double variable into an interger using the int-type cast module
    int val = int (num);
    std::cout << "You've entered the integer " << val << "\nBye\n";

    // Closing the program
    return 0;
}
