// includin the header files 
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


// running the main function 
int main() {
	// Seed the random number generator 
	srand(static_cast<unsigned int> (time(0)));

	// The input variable 
	double guessNumber; 

	// Setting the bool value 
	bool CONDITION = true; 

	// Setting a while loop to keep on generating the random number. 
	while (CONDITION) {
		// Define the array 
		double numbers[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
		int arraySize = sizeof(numbers) / sizeof(numbers[0]); 

		// Generate a random index 
		int randomIndex = rand() % arraySize; 

		// Access the random number from the array 
		double randomNumber = numbers[randomIndex];

		// Take the user input 
		std::cout << "Guess the random number: "; 

		// Take the user input 
		std::cin >> guessNumber; 

		// Check if the number guessed is the same 
		if (guessNumber == randomNumber) {
			// Display to the user that this number is correct 
			std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl; 

			// Breaking the while loop 
			CONDITION = false; 
		} 

		// else if the random number was not correct, tell the user 
		// to try again 
		else {
			// Execute the block of code if the random number was not guessed 
			std::cout << "Sorry, Try again! " << std::endl;
			std::cout << "The random number was: " << randomNumber << std::endl;  

		}

	}

	// closing up 
	return 0; 
}