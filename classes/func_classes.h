// Including some necessary header files 
#include <iostream> 
#include <string> 

// Using namespaces 
using namespace std; 

// Creating a class for mathematical function 
class MathFunctions {
    // Private access specifier 
    private:
        // Setting some variables which would only be accessible to only
        // the class, and not exposed outside 
        double const logE = 0.87532; 
        double const logP = -0.98e-10;


    // Public access specifier 
    public:
        // Accessing the private variables, and using a function to work 
        // with them, for fun. 
        double hiddedFunction(double x, double y) {
            double result; 
            result = (x * logE) + ( y * logP); 

            // Return the result 
            return result; 
        }

        // Addition function 
        double add(double x, double y) {
            return x + y; 
        }

        // Substraction function 
        double substraction(double x, double y) {
            return x - y; 
        }

        // Multiplication function 
        double multiply(double x, double y) {
            return x * y; 
        }

        // Division function 
        double division(double x, double y) {
            return x / y; 
        }
}; 