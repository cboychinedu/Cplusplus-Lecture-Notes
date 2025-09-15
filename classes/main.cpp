// Including the header files 
#include <iostream> 
#include <string> 

// Using namespaces
using namespace std; 

// Including the header files 
#include "func_classes.h"

// Running the main function 
int main() {
    // Using the created class inside the "func_classes.h" header files 
    // Creating an instance of the "MathFunctions" class 
    MathFunctions Mathfunctions; 

    // Declaration and definition of some specific variables 
    double x = 20; 
    double y = 20; 
    double addedRes, substractedRes, multipliedRes, dividedRes; 
    double privateResult; 

    // Performing some basic calculations 
    addedRes = Mathfunctions.add(x, y);
    substractedRes = Mathfunctions.substraction(x, y); 
    multipliedRes = Mathfunctions.multiply(x, y); 
    dividedRes = Mathfunctions.division(x, y); 

    // Working on the private access identifier
    privateResult = Mathfunctions.hiddedFunction(x, y); 

    // Displaying the results 
    cout << "Added result: " << addedRes << "\n"; 
    cout << "Substracted result: " << substractedRes << "\n"; 
    cout << "Multiplied result: " << multipliedRes << "\n"; 
    cout << "Divided result: " << dividedRes << "\n";

    // Displaying the results for the math calculations on the private section 
    cout << "Private calculations results: " << privateResult << "\n";  

    // Closing the application 
    return 0; 

}