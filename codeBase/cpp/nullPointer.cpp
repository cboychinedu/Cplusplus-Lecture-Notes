// Including the header files 
#include <iostream> 
#include <string> 
#include <cmath> 

// running the main function 
int main(int args, char** argv) {
	/*
		Null pointer is a special value that means something has no 
		* value. When a pointer is holding a null value, 
		that pointer is not pointing at anything. 
	*/
	int *pointer = nullptr; 
	int x = 123; 

	pointer = &x; 

	// 
	if (pointer == nullptr) {
		std::cout << "address was not assigned \n"; 
	}

	else {
		std::cout << "Address was assigned \n"; 
	}


	// closing up 
	return 0; 

}