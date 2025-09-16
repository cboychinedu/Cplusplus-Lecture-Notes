// including the header files 
#include <iostream> 
#include <vector> 

// Creating a function to print the vector with integers 
void printIntVector(const std::vector<int> &numbers) {
	// using for each loop to loop through the vector 
	for (int number : numbers) {
		std::cout << number << std::endl; 

	};
}; 

// Creating a function to print vector with strings 
void printStringsVector(const std::vector<std::string> stringValues) {
	// Using for each loop to loop through the vector 
	for (std::string names : stringValues ) {
		// Display th names 
		std::cout << names << std::endl; 
	}; 

}; 


// Running the main function 
int main(int args, char** argv) {
	// Creating the vector 
	std::vector<int> numbersVector = {30, 40, 50, 60, 100, 31}; 

	// Creating the string vector 
	std::vector<std::string> namesVector = {"Sarah", "Sheddrack", "Mike", "Adams", "Smith", "Page"}; 

	// Looping 
	printIntVector(numbersVector); 
	printStringsVector(namesVector);  

	// Closing up 
	return 0; 
}

