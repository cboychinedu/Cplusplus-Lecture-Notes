// including the header files 
#include <iostream> 
#include <vector> 
#include <variant> 
#include <string> 

// running the main function 
int main(int args, char** argv) {
	// Define a variant that can hold an int, a double or a string 
	std::vector<std::variant<int, double , std::string>> mixedData = {"Sarah", "Mike", 21, 10, 4.56, 0.9875};

	// Iterate through the vector and access the values 
	for (const auto& values : mixedData ) {
		// Use std::visit to safely access the held value 
		std::visit([](const auto& arg){
			std::cout << arg << std::endl; 
		}, values); 

	}

	// closing up 
	return 0;  
}