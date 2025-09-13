// Including the header files
#include <iostream>
#include <string>
#include "phy.h"

// Using namespace for the standard template libary.
using namespace std;

// Running the main function.
int main()
{
    // Creating variable to hold the mass and force respectively.
    double mass, force;
    std::string option;

    // Creating a const to hold the ArSize.
    const int ArSize = 20;

    // Asking the user for the value to calculate.
    std::cout << "Force/Mass Calculation application.  Type (force) or (mass) for the respective result: ";
    getline(std::cin, option);

    // Asking the user for some specific value if the user selected "force"
    if ( option == "force" )
    {
        // execute this block of code if the user selected force
        // Asking the user for the mass of the object or body.
        std::cout << "Give the mass of the object: ";
        std::cin >> mass;

        // Calculating the force
        std::cout << "\nGiven that the acceleration due to gravity is(g/s^2): " << GRAVITY << "g/s^2" << std::endl;
        force = calculate_force(mass);

        // Displaying the result.
        std::cout << "The calculated force is: " << force << "Newton" << std::endl;

    }

    // Asking the user for some specific value if the user selected "mass"
    else if ( option == "mass" )
    {
        // execute this block of code if the user selected mass
        // asking the user for the force.
        std::cout << "Give the force of the object(Newton): ";
        std::cin >> force;

        // Calculating the mass
        std::cout << "\nGiven that the acceleration due to gravity is: " << GRAVITY << "g/s^2" << std::endl;
        mass = calculate_mass(force);

        // Displaying the result
        std::cout << "The calculated mass is: " << mass << "Kg" << std::endl;

    }

    // Closing the program
    return 0;
}
