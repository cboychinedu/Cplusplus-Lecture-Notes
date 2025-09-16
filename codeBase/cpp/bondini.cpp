#include <iostream>
#include <string>

// Running the main function
int main()
{
  // Creating a variable to hold the agent code
  unsigned long code; 

  // Working with the backspace character
  std::cout << "\a Operation \"HyperHype\" is now activate! \n";
  // std::cout << "Enter your agent code: ____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
  std::cout << "Enter your agent code: _________'\x8\x8\x8\x8\x8\x8\x8\x8\x8\x8\x8"; 

  // Taking in the user input
  std::cin >> code;

  // Displaying the Agents code
  std::cout << "\aYou entered " << code << ".....\n";
  std::cout << "\aCode Verified! Hello Agent COLBALT-16, Proceed with Plan ZETROX-B15" << std::endl;

  // Closing the program
  return 0;
}
