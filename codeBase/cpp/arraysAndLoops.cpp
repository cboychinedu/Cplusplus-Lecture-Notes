// including the header files 
#include <iostream> 
#include <string> 
#include <cmath> 

// running the main function 
int main(int args, char** argv) {
	// Create an array of strings 
	std::string cars[5] = {"BMW", "Ford", "Mazda", "Tesla", "Benz"}; 

	// Getting the size of the string car 
	int arraySize = sizeof(cars) / sizeof(std::string); 

	// using for loop to loop through the cars array 
	for (int i = 0; i < arraySize; i++) {
		// Displaying the contents of the array 
		std::cout << "Array Contents: " << cars[i] << std::endl; 
	}

	// closing up 
	return 0; 
}