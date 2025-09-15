// including the header files 
#include <iostream> 
#include <string> 
#include <vector>

// running the main function
int main(int args, char** argv) {
	// Creating a vector off int type, double and float 
	std::vector <int> intVector = {20, 30, 50, 100, 120, 234, 36}; 
	std::vector <double> doubleVector = {3.45, 6.7, 20.98, 4.56, 7.89, 13.23}; 
	std::vector <std::string> userNames = {"Sarah", "Mike", "Adams", "Smith", "Grande", "Shelia"}; 


	// Displaying the contents of a vector 
	std::cout << userNames[2] << std::endl;

	
	// Adding values into the vector 
	userNames.push_back("Kelvin");  

	// Looping through the vector 
	for (std::string names: userNames) {
		std::cout << "Contents of userNames Vector: " << names << std::endl; 

	}

	// Getting the size of the double vector 
	int doubleVectorSize = doubleVector.size(); 

	// Looping 
	for (int i = 0; i < doubleVectorSize; i++ ) {
		std::cout << doubleVector[i] << std::endl; 
	}

	// closing up 
	return 0; 
}