// Including the header files 
#include <iostream> 
#include <string> 
#include <cmath> 

// Creating a function that takes in arrays of numbers 
void myFunction(int myNumbers[], int size) {
    // Using for loop 
    for (int i = 0; i < size; i++) {
        std::cout << myNumbers[i] << std::endl; 
    }
}

// Running the main function 
int main(void) {
    // Creating an array 
    int numbersArray[] = {30, 20, 40, 50, 60, 98, 120, 340};

    // Getting the size of the array 
    int arraySize = sizeof(numbersArray) / sizeof(numbersArray[0]); 

    // Displaying the contents of the array 
    myFunction(numbersArray, arraySize); 
    
    // Closing up 
    return 0; 
}