// Including the header files 
#include <iostream> 
#include <string> 
#include <limits> // Required for numeric_limits
#include "bmiCalculator.h"

// Note: The function `calculateBmi` is assumed to be defined in "bmiCalculator.h"

// running the main application 
int main() {
    // Declaration of the variables 
    double mass, height;
    double bodyMassIndex;

    // Creating an instance of the bmi and area class 
    BmiClassAndAreaClass areaAndBmi; 

    // Using a do-while loop for a cleaner structure
    char userOption; 
    do {
        // Asking the user if they want to exit 
        std::cout << "Do you want to exit? (y/n): "; 
        std::cin >> userOption;

        // Using if-else if statement for options 'y' or 'n'
        if (userOption == 'n' || userOption == 'N') {
            // Get user data for the BMI calculation 
            std::cout << "Enter your mass (kg): "; 
            std::cin >> mass; 
            
            // Validate mass input
            while (std::cin.fail()) {
                std::cout << "Invalid input. Please enter a valid number for mass (kg): ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin >> mass;
            }

            // Taking the user's height
            std::cout << "Enter your height (meters): "; 
            std::cin >> height; 
            
            // Validate height input
            while (std::cin.fail()) {
                std::cout << "Invalid input. Please enter a valid number for height (meters): ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin >> height;
            }

            // Perform the calculation for BMI 
            bodyMassIndex = areaAndBmi.calculateBmi(mass, height); 

            // Displaying the result 
            std::cout << "Your Body Mass Index (BMI) is: " << bodyMassIndex << std::endl; 
            
            std::cout << "------------------------\n\n";

        } else if (userOption != 'y' && userOption != 'Y') {
            // Handle invalid input for the 'y/n' prompt
            std::cout << "Invalid option. Please enter 'y' or 'n'." << std::endl;
        }

    } while (userOption != 'y' && userOption != 'Y'); // Continue loop if user enters 'n' or an invalid option

    std::cout << "Exiting the program. Goodbye!" << std::endl;

    return 0; 
}