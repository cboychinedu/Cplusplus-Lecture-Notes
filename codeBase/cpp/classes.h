// including the header files 
#include <iostream> 
#include <string> 

// Creating the math class 
class MathFunction {
	// private access specifier 
	private:
		// Setting some varibles which would only be accessible to only 
		// the class 
		double const logE = 0.87532; 
		double const logP = -0.98e-10; 

	// Public access specifier 
	public: 
		// Accessing the private variables, and using a function with them 
		double add (double x, double y) {
			return x + y; 
		} 

}