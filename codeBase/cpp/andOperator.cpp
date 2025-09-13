// including the header files 
#include <iostream> 
#include <cmath>
#include <string>


// running the main function 
int main(void) {
	int temp; 

	// Taking the user's temperature 
	std::cout << "Enter the temperature: "; 
	std::cin >> temp; 

	// Using the if else state 
	if (temp > 0 && temp < 30) {
		// Displaying the result 
		std::cout << "The temperature is good. \n"; 

	}

	else if (temp == 25) {
		std::cout << "Good temperature, room temperature. \n"; 

	}

	else {
		std::cout << "The temperature is bad! \n"; 
	}

	// Closing up 
	return 0; 
}