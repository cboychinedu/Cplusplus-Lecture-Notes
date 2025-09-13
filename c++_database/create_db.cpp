// Including the header files
#include <iostream>
#include <sqlite3.h>


// Using the standard namespace lib
using namespace std;

// Running the main program
int main()
{
    // Creating a pointer variable called DB 
    sqlite3* DB;

    // Creating an integer variable with it's initial values of zero
    int exit = 0;

    // Assigning the value for exit to be a return type for the execution
    // of opening the database
    exit = sqlite3_open("example.db", &DB);

    // if-statement
    if (exit)
    {
        // Execute this block of code if the exit code return true (1)
        std::cerr << "Error opening the database file " << sqlite3_errmsg(DB) << std::endl;
        return (-1);
    }

    // else-statement
    else
    {
        // Executing the code
        std::cout << "Opened the database sucessfully! " << std::endl;
    }

    // Closing off the connection
    sqlite3_close(DB);

    // Closing the program
    return 0;
}
