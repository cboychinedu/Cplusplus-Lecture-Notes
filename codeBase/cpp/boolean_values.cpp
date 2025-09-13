// Including the header file
#include <iostream>
#include <string>

// Running the main function
int main()
{
  // Creating a variable to hold the BOOLEAN VALUE
  bool CONDITION = true;

  // Creating an Array to hold two values
  bool BOOLEAN_ARRAY[2] = {true, false};

  // Getting the actual size of the array
  int ArraySize = sizeof(BOOLEAN_ARRAY) / sizeof(BOOLEAN_ARRAY[0]);

  // Making an if/else statement
  if (CONDITION == true)
  {
    // Executing this block of code
    std::cout << "The condition is true \n";

    // Displaying the boolean array
    for (int i = 0; i < ArraySize; i++)
    {
      // Displaying each values in the BOOLEAN ARRAY
      std::cout << "The values in the array is: " << BOOLEAN_ARRAY[i] << std::endl;


    }

    // Displaying the size of the BOOLEAN ARRAY
    std::cout << "The size of the array is: " << ArraySize << std::endl;

  }

  // Else if statement
  else if(CONDITION == false)
  {
    // Executing this block of code
    std::cout << "The condition is false \n";

  }
  // Closing the program
  return 0;
}
