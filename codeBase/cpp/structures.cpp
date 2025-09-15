// including the header files 
#include <iostream> 
#include <string> 
#include <cmath>

// Creating a structure 
struct userCredentialStruct {
	std::string firstName; 
	std::string lastName; 
	int age;
	std::string location; 
	double creditScore;  

}; 

// running the main function 
int main(void) {
	// Creating a structure based on the user 
	userCredentialStruct MbonuChinedumStruct {
		"Chinedum", 
		"Mbonu", 
		26, 
		"Warri, Delta State", 
		0.97
	}; 

	// Using the structure 
	std::cout << "The user firstname is: " << MbonuChinedumStruct.firstName << std::endl;
	std::cout << "The user lastname is: " << MbonuChinedumStruct.lastName << std::endl; 
	std::cout << "The user age is: " << MbonuChinedumStruct.age << std::endl;

	// closing up 
	return 0; 
}