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
	double resultInKelvin, resultInCelsius;  

	// Converting into kelvin 
	resultInKelvin = convertCelsiusToKelvin(celsiusT); 

	// Displying the result 
	std::cout << "The result in K is: " << resultInKelvin << std::endl; 

	// Converting into celsius 
	resultInCelsius = convertKelvinToCelsius(kelvinT); 

	// Displying the result 
	std::cout << "The result in C is: " << resultInCelsius << std::endl; 

	// Closing up 
	return 0; 
}