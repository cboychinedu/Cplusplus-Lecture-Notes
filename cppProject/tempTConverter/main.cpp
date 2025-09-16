// Including the header file 
#include <iostream> 
#include "modules/headers/convertTemp.h"

// Using namespace 
using namespace std; 

// Running the main function 
int main(void) {
	// Declaring a variable for the calculations in t(Kelvin) 
	// and t(celsius) 
	double kelvinT = 434; 
	double celsiusT = 25.60;
	double result;  

	// Converting into kelvin 
	result = convertCelsiusToKelvin(celsiusT); 

	// Displying the result 
	std::cout << "The result in K is: " << result << std::endl; 

	// Closing up 
	return 0; 
}