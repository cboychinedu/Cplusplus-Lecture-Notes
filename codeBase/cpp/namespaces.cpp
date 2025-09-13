// including the header files 
#include <iostream> 


// first namespace 
namespace first {
	int x = 20; 
	double PI = 3.142; 
}

// second namespace 
namespace second {
	int x = 30; 
	double age = 25;  
	double tempT = 22.4; // Measured in kelvin 

}


// setting the namespace 
using std::cout 
using std::string 


// running the main function 
int main() {
	// Getting the necessary namespaces 
	std::cout << second::tempT << std::endl; 

	// getting another namespace 
	std::cout << first::PI << std::endl; 

	// closing up 
	return 0; 
}