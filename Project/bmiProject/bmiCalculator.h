// Including the header files 
#include <iostream> 
#include <cmath> 
#include <string> 


// Creating a function for calculaing the bmi index 
double calculateBmi(double mass, double height) {
	// Getting the variables 
	double bodyMassIndex, heightSquared; 

	// Calculation for the body mass index (BMI) 
	heightSquared = pow(height, 2); 

	// BMI calculation 
	bodyMassIndex = mass / heightSquared; 

	// Returning the result 
	return bodyMassIndex; 

}