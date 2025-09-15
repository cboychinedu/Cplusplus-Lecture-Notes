// including the header files 
#include <iostream> 
#include <string> 
#include <limits> 
#include "modules/headers/bmiClass.h"

// running the main application 
int main(void) {
	// Declaration of the variables 
	double mass, height; 
	double bodyMassIndex; 
	double radius, area; 

	// Creating an instance of the bmi and area class 
	BmiClassAndAreaClass areaAndBmi; 

	// Using a do-while loop for a cleaner structure 
	char userOption; 
	char calculationOption; 

	// Using a do while loop 
	do {
		// Asking if the user want to exit 
		std::cout << "Do you want to exit? (y/n): "; 
		std::cin >> userOption; 

		// Validate the user option 
		while (std::cin.fail()) {
			std::cout << "Invalid input, Please select (y/n): "; 
			std::cin.clear(); 
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> userOption; 
		}


		// Using if/else statement for options 'y' or 'n' 
		if (userOption == 'n' || userOption == 'N') {
			// Asking the user which calculations he/she want to perform 
			std::cout << "Which calculation do you want to perform, BMI(b/B) or Area(a/A): "; 
			std::cin >> calculationOption;

			// If the user want a bmi calculation, execute the block of code below. 
			if (calculationOption == 'b' || calculationOption == 'B') {
				// Get the user data for the BMI calculation 
				std::cout << "Enter your mass (Kg): "; 
				std::cin >> mass; 

				// Validate the mass input 
				while (std::cin.fail()) {
					std::cout << "Invalid input, Please enter a valid number for mass (Kg): "; 
					std::cin.clear(); 
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cin >> mass; 

				}

				// Taking the user's height 
				std::cout << "Enter your height (meters): "; 
				std::cin >> height; 

				// Validate the height input 
				while (std::cin.fail()) {
					std::cout << "Invalid input, Please enter a valid number for the height (meters): "; 
					std::cin.clear(); 
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
					std::cin >> height; 
				}

				// Perform the calculation for BMI 
				bodyMassIndex = areaAndBmi.calculateBmi(mass, height); 

				// Displaying the result 
				std::cout << "Your Body Mass Index (BMI) is: " << bodyMassIndex << std::endl; 

				// 
				std::cout << "--------------------------------------------------------\n\n"; 


			}

			// Else if 
			else if (calculationOption == 'a' || calculationOption == 'A') {
				// Calculating the area of a circle 
				// getting the values for radius and pi 
				std::cout << "Enter your radius (meters): "; 
				std::cin >> radius; 

				// Validate the radius 
				while (std::cin.fail()) {
					std::cout << "Invalid input, Please enter a valid number for the radius (meters): "; 
					std::cin.clear(); 
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cin >> radius; 

				}

			}
		} 

		// else if the user choses the yes(y) option 
		else if (userOption != 'y' && userOption != 'Y') {
			// Handle invalid input for the 'y/n' prompt 
			std::cout << "Invalid option. Please enter 'y' or 'n' . " << std::endl; 
		}
	}

	// While loop 
	// Continue loop if user enters 'n' or an invalid option
	while (userOption != 'y' && userOption != 'Y'); 

	// Existing the program 
	std::cout << "Exiting the program, Goodbye!" << std::endl; 

	// Closing up 
	return 0; 
}