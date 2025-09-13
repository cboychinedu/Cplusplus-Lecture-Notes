// including the header files 
#include <iostream>

int main() {
	// type conversion 

	int correct = 8; 
	int questions = 10; 

	double score = (correct / (double) questions) * 100; 


	// displaying the result 
	std::cout << score << std::endl; 


	// closing up 
	return 0; 
}