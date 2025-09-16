// Including the header files 
#include <iostream> 
#include <string> 

// Creating the class of shape 
class Shape{
	private:
		const double PI = 3.142; 
		const double exp = 6.2314E-10; 
		
	public:
		double area; 
		double volume;  

}; 

// Creating a class cube that inherents a class 
// shape 
class  Cube : public Shape {
	public: 
		double side; 

		Cube(double side) {
			this->side = side; 
			this->area = side * side * 6; 
			this->volume = side * side * side; 

		}

}; 


// Running the main fuction 
int main(void) {
	Cube cube(50);

	std::cout << "Area: " << cube.area << "cm \n";
	std::cout << "volume: " << cube.volume << "cm2 \n";

	// closing up 
	return 0; 
}