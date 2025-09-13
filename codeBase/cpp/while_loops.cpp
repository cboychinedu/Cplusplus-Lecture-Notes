// Including the header files
#include <iostream>
#include <string>

// Running the main function
int main()
{
    /* Creating a program to ask for the user name and
        display it in a while loop */

    // Creating a variable to hold the user's name
    std::string USER_NAME;

    // Setting a bool type cast
    bool COND = true;

    // Creating a while loop for continous question and displays
    while ( COND )
    {
        // Setting the value for COND
        std::cout << "Type q to quit\n";

        // Asking for the username
        std::cout << "What is your name: ";
        getline(std::cin, USER_NAME);

        // IF/ELSE block
        if ( USER_NAME == "q")
        {
            // Setting the condition to false to quit the program.
            COND = false;
        }

        // Else/if block
        else if ( USER_NAME != "q")
        {
            // Displaying the name
            std::cout << "Your name is: " << USER_NAME << std::endl;
        }

    }

    // Closing the program
    return 0;
}
