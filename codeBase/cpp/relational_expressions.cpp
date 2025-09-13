// Including the header files
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

// Running the main function
int main()
{

    // Creating a vector to hold string values
    std::vector <std::string> NAMES = {"Nedu", "Alan", "Sarah", "Grande"};

    // Creating another for-loop to extract all the names from the vector Array
    for (int i = 0; i<4; i++)
    {
        // Extracting information from the vector array
        std::cout << NAMES[i] << std::endl;

        //
        if ( NAMES[i] == "Grande" )
        {
            // Checking to see if the name "Alan" is present in the vector Array
            std::cout << "Grande is present in the vector array. " << std::endl;

        }

        //
        else if ( NAMES[i] == "Alan" )
        {
            //
            std::cout << "Alan is present in the vector array. " << std::endl;
        }

    }

    // Closing the program
    return 0;
}
