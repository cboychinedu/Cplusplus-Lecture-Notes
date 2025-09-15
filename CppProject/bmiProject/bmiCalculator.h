// Including the header files 
#include <iostream> 
#include <cmath> 
#include <string> 


// Creating the class for the bmi application 
class BmiClassAndAreaClass {
	// private access specifier 
	private:
		// Setting some constants
		double const PI = 3.142; 
		double const logE = 0.87532; 
		double const logP = -0.98e-10; 


	// Public access specifier 
	public: 
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

		// Creating a function for calculating the area of a circle 
		double areaOfAcircle(double radius) {
			// Setting the area variable 
			double area; 

			// Calculating the result 
			area = PI * pow(radius, 2); 

			// returning the result 
			return area; 
		}
}; 


