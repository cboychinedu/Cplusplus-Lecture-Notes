// including the header files 
#include <iostream> 
#include "modules/headers/add.h"
#include "modules/headers/substract.h"

// running the main function 
int main(void) {
	double num1 = 20.5; 
	double num2 = 43.5; 

	// call the add function 
	double Additionresult = add(num1, num2); 
	double substractResut = substract(num1, num2); 

	// Displaying the resutl 
	std::cout << "The sum is: " << Additionresult << std::endl; 
	std::cout << "The substracted result is: " << substractResut << std::endl; 

	// Closing up 
	return 0; 

}