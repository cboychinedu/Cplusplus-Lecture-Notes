// Including the header files
#include <iostream>
#include <string>
#include <vector>
#include "Func.h"

// Running the main function
int main()
{
    // Creating variables to hold three data types
    double pressure = 0.98E-2;
    int force = 50;
    char UNITS =  'N';

    // Working with pointers
    double *ptr_double_pressure = &pressure;
    int *ptr_int_force = &force;
    char *ptr_char_units = &UNITS;

    // Displaying the memory address for the data types variables
    std::cout << "The mem address for the double variable (pressure) is: " << ptr_double_pressure << "\n";
    std::cout << "The mem address for the int variable (force) is: " << ptr_int_force << "\n";
    std::cout << "The mem address for the char variable (UNITS) is: " << ptr_char_units << "\n";

    // Changing the values for the double and force variables using the pointer values
    *ptr_double_pressure = 0.65E-4;
    *ptr_int_force = 42;

    // Checking the changes values
    std::cout << "The change values for (pressure) is: " << pressure << "\n";
    std::cout << "The changed values for (force) is: " << force << "\n";

    // Getting the first user information by calling the extract_first_user information
    // From the included "Func.h" header files.
    extract_first_user_information();

    // Closing the program
    return 0;
}
