// including the header files 
#include <iostream> 
#include <string> 


// A function that adds two integers and returns the result
int add(int a, int b) {
    return a + b; 
}

// A function that displays a name 
void displayName(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl; 
}

// running the main function 
int main(void) {
    int number1 = 40; 
    int number2 = 20; 

    // adding the numbers 
    double result = add(number1, number2); 

    // displaying a name
    displayName("Alice"); 

    // Displaying the results 
    std::cout << result << std::endl; 

    // closing up 
    return 0; 
}