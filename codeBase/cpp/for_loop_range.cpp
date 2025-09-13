// Including the header files
#include <iostream>
#include <string>
#include <vector>

// Using namespace directive
using namespace std;

// Running the main function
int main()
{
    // Creating a string array to hold user names
    std::vector <std::string> user_names = {"Grande", "Mike", "Joan", "Sean", "Demi"};

    // Creating a vector array to hold number(floats)
    vector <float> FLOAT_NUM = {0.34e-3, 0.86e-12, 0.0098E-4, 98.865E-3};

    // Setting the value for count as zero
    int count = 0;

    // listing all the values line by line
    for (float numbers : FLOAT_NUM )
    {
        // Displaying the values line by line
        cout << "The value in the FLOAT_NUM vector array is: " << numbers << endl;

        // listing all the values line by line for the user_names array
        for ( std::string names : user_names )
        {
            // Displaying just one name and break out of the loop
            std::cout << "The name is: " << user_names[count] << std::endl;
            count ++;

            // Breaking
            break;
        }

    }

    // Closing the program
    return 0;
}
