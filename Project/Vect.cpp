// Including the header files
#include <iostream>
#include <vector>
#include <string>

// Running the main function
int main()
{
    // Creating a vector to hold double as a specific data type
    std::vector <double> volumes = {30.9, 20.3, 13.23, 21.8};
    std::vector <std::string> USER_NAMES = {"cboy.chinedu@gmail.com", "alansmith@gmail.com", "kurtbliss4real@ymail.com"};

    // Creating a for-loop to display all the elements in the volume vector.
    for (int i = 0; i < volumes.size(); i++)
    {
        // Display all the elements in the volumes vector.
        std::cout << volumes[i] << std::endl;
    }

    // Creating a for-loop to display the elements in the USER_NAMES vector
    for (int i = 0; i < USER_NAMES.size(); i++)
    {
        // Display all the elements in the string vector.
        std::cout << USER_NAMES[i] << std::endl;
    }

    // Closing the program
    return 0;
}
