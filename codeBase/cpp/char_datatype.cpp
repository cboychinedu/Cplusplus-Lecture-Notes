// Including the header files
#include <iostream>
#include <string>

// Running the main function
int main()
{
  // Creating a variable to hold the character
  char ch;

  // Creating a string of characters
  char charString[] = "GeekforGeeks";

  // Displaying the string of characters
  std::cout << "The string of characters are: " << charString << std::endl; 

  // Taking in a single character from the user
  std::cout << "Enter a character: ";
  std::cin >> ch;

  // Converting the character into its "ASCII" value
  int ASCII = ch;         // Storing the character as an ASCII value.

  // Displaying what the user typed
  std::cout << "You typed the following: " << ch << std::endl;

  // Displaying the ASCII value for the typed in character
  std::cout << "The ASCII value for: " << ch << " is " << ASCII << "\n";

  // Closing the program
  return 0;
}
