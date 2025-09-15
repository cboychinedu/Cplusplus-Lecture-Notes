// Including the header files 
#include <iostream>
#include <string>
#include <string>
#include <cmath>

// Running the main function 
int main(int args, char** argv) {
	// setting a variable 
	int day; 

	// Getting the user's input 
	std::cout << "Enter your day number from (1-7): "; 
	std::cin >> day; 

	// Using switch case statement 
	switch (day) {
		case 1:
			std::cout << "Monday" << std::endl;
			break; 
		case 2: 
			std::cout << "Tuesday" << std::endl; 
			break; 
		case 3: 
			std::cout << "Wednesday" << std::endl; 
			break; 
		case 4: 
			std::cout << "Thursday" << std::endl; 
			break; 
		case 5: 
			std::cout << "Friday" << std::endl; 
			break; 
		case 6: 
			std::cout << "Saturday" << std::endl; 
			break; 
		case 7: 
			std::cout << "Sunday" << std::endl; 
			break;  
	}


	// closing up 
	return 0; 

}