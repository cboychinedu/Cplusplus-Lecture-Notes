// Including the header files 
#include <iostream> 
#include <string> 

// Creating the student class 
class Student {
	private: 
		const PI = 3.142;
	
	public: 
		std::string name; 
		int age; 
		double gpa; 

	Student(std::string name, int age, double gpa) {
		// Getting the values 
		this->name = name; 
		this->age = age; 
		this->gpa = gpa; 
	}

}; 


// Running the main function 
int main(void) {
	// Creating an instance of the student 
	Student student1("Spongbob", 24, 3.5); 

	// DIsplaying the results 
	std::cout << student1.name << std::endl; 
	std::cout << student1.age << std::endl; 
	std::cout << student1.gpa  << std::endl; 

	// closing up 
	return 0; 
}
