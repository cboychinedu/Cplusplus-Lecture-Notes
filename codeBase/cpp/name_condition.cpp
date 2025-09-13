// Including the header file
#include <iostream>
#include <string>

// Running the main function
int main()
{
  // Creating variables to hold the users name, input_name, and
  // Some specific numbers.
  std::string user_name = "chinedu";
  std::string input_name;

  // Creating an Array to hold different names
  std::string ArrayNames[4] = {"Kelvin", "Jane", "Joan", "Kelly"};

  // Displaying the second value in the ArrayNames
  std::cout << ArrayNames[1] << std::endl; 

  // Creating a variable to hold the user Age
  unsigned int AgeValue;

  // Taking in inputs from the user
  std::cout << "Type in your name: ";
  std::cin >> input_name;

  // Displaying the user_name value
  std::cout << "The stored name is: " << user_name << std::endl;

  // Making some if/else conditions
  if (input_name == user_name)
  {
    // Executing the block of code if the condition is met
    std::cout << "Hello " << user_name << std::endl;
    std::cout << "Can you please tell me your age: ";
    // Taking in the user age for chinedu
    std::cin >> AgeValue;

  }

  // Displaying the user's age on the screen
  std::cout << "So your age is: " << AgeValue << std::endl;

  // Closing the program
  return 0;
}
