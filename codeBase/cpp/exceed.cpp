// exceed.cpp
// Including the header files
#include <iostream>
#include <climits>
#include <string>

// Using Define function
#define ZERO 0    // Makes ZERO symbol for 0 value

// Running the main function
int main()
{
  // Creating a variable to hold the maximum value for the data type "short"
  short sam = SHRT_MAX;

   // Creating some basic variables using unsigned
   unsigned short sue = sam;    // okay if varibale sam already defined

   // Displaying some values
   std::cout << "Sam has " << sam << " dollars and sue has " << sue;
   std::cout << " dollars deposited." << std::endl;

   // Using the symbol for ZERO to see how it affects the code
   std::cout << ZERO << std::endl; 

   // Checking out how to break line in the syntax and not inside the code.
   std::cout << "Testing how to go to a new line on the syntax" <<
   " Without adding the end line module. " << std::endl;


   // Closing the program
   return 0;
}
