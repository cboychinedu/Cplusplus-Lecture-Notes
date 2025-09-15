// including the header files 
#include <iostream> 
#include <string> 

// Running the main application 
int main(void) {
	// Decalaring a pointer 
	int age = 30; 

	// Declare a pointer to an interger 
	int *ptrAge; 

	// Assing the memory address of 'age' to the pointer 
	ptrAge = &age; 

	// Displaying the results 
	std::cout << "Value of age: " << age << std::endl; 
	std::cout << "Memory address of age: " << &age << std::endl;  

	// Change the value of the 'age' through the pointer 
	*ptrAge = 20; 

	// closing up 
	return 0; 
}

