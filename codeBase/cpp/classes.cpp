// Including the header files 
#include <iostream> 
#include <string> 
#include <cmath> 

// Creating a class 
class Human{
	public: 
		std::string name; 
		std::string occupation;
		int age;

		void eat() {
			std::cout << "This person is eating \n"; 
		} 

		void drink() {
			std::cout << "This person is drinking \n"; 
		}

		void sleep() {
			std::cout << "this person is sleeping \n"; 
		}
}; 


// running the main function 
int main(int args, char** argv) {
	/*
	*
	*/
	Human humanOne; 

	// 
	humanOne.name = "Rick"; 
	humanOne.occupation = "scientist"; 
	humanOne.age = 70; 

	// 
	std::cout << humanOne.age << std::endl; 
	std::cout << humanOne.occupation << std::endl; 
	std::cout << humanOne.name << std::endl;


	// Getting the methods 
	humanOne.eat(); 
	humanOne.drink(); 
	humanOne.sleep();  


	// closing up 
	return 0; 

}