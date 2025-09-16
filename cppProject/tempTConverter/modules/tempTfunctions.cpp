// Including the header files 
#include <iostream> 
#include <string> 
#include <cmath> 
#include "headers/convertTemp.h"


// Defining the convert to celsius to kelvin function 
double convertCelsiusToKelvin(double celsiusValue) {
	// Declaring the result variable 
	double kelvinTemp; 

	// Converting the celsius value into kelvin
	kelvinTemp = celsiusValue + 273; 

	// Returning the result 
	return kelvinTemp; 
}; 

// Defining a function to convert kelvin to celsius 
double convertKelvinToCelsius(double kelvinValue) {
	// Declaring the result variable 
	double celsiusTemp; 

	// Converting the kelvin value into celsius 
	celsiusTemp = kelvinValue - 273; 

	// Returning the result 
	return celsiusTemp; 
}