#include <iostream>
#include <string>

// Creating a function for converting the
// stone to libs
int stoneLib(int stone)
{
  // Creating a variable to hold the result for the converted value
  int result;

  // Performing the calculation
  result = 14 * stone;

  // Returning the result
  return result;
}

// Running the main function
int main()
{
  // Creating a variable to hold the value for the stone
  int stone, pounds;

  // Taking in the value from the user
  std::cout << "Enter the weight in stone: ";
  std::cin >> stone;

  // Getting the values in pounds
  pounds = stoneLib(stone);

  // Displaying
  std::cout << "The value in stone is: " << stone << std::endl;
  std::cout << "The value in pounds is: " << pounds << std::endl;

  // closing the function
  return 0;
}
