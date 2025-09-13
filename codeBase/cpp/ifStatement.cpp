#include <iostream> 
#include <cmath> 

// running the main function 
int main(void) {
	int age; 

	// Getting the user age 
	std::cout << "Enter your age: "; 
	std::cin >> age; 

	// Using the if else statement 
	if (age >= 18) {
		std::cout << "Welcome to the site \n"; 
	}

	// Using else if 
	else if (age < 18) {
		std::cout << "Your age is less than 18, you cannot enter! \n"; 
	}

	else {
		std::cout << "You are not old enough to enter! \n"; 

	}


	// closing up 
	return 0; 
	
}