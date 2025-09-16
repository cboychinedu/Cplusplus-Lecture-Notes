// Including the header files 
#include <iostream> 
#include <string> 
#include <cmath> 

// running the main function 
int main(int args, char** argv) {
	/*
	* Pointers - This are variables that stores a memory address of 
	* another variable sometimes it's easier to work with an address 
	*/

	std::string name = "Mark Brown";
	int age = 21;  

	// 
	std::string *pName = &name; 


	std::cout << *pName << std::endl; 
	int *pAge = &age; 


	// 
	std::cout << *pAge << std::endl; 


	// closing up 
	return 0; 

}