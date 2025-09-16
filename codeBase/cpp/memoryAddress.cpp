// Including the header files 
#include <iostream> 
#include <string>

// Using namespace 
using namespace std; 

// Running the main function 
int main(void) {
	/**
	 * Memory address - a location in memory where data is stored
	 * A memory address can be accessed with & (address of the operator) 
	 * */

	string name = "Mosh Gami"; 
	int age = 27; 
	bool student = true; 

	// Displaying the memory 
	std::cout << &name << std::endl; 
	
	// closing up the function 
	return 0; 
}