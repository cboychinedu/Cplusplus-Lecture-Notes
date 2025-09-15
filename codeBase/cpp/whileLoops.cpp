// including the header files 
#include <iostream> 
#include <string> 

// running the main program 
int main(int args, char** argv) {
	// declaring a variable to set the count down 
	int countDown = 10; 

	// using while loop 
	while (countDown > 0) {
		// Displaying the count down
		std::cout << countDown << std::endl; 

		// decrementing the count down 
		countDown--; 


	}

	std::cout << "Happy New Year \n"; 

	// closing up 
	return 0; 
}