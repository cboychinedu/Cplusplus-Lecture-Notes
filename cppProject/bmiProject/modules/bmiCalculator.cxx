// Including the header files 
#include <iostream> 
#include <cmath> 
#include <string> 
#include "headers/bmiClass.h"


// Creating the class for the bmi application 
double BmiClassAndAreaClass::calculateBmi(double mass, double height) {
	// Getting the variables 
	double bodyMassIndex, heightSquared; 

	// Calculation for the body mass index (BMI) 
	heightSquared = pow(height, 2); 

	// BMI calculation 
	bodyMassIndex = mass / heightSquared; 

	// Returning the result 
	return bodyMassIndex; 

}; 


