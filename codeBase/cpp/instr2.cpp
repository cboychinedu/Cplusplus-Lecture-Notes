// Including the header files
#include <iostream>
#include <string>

// Running the main function
int main()
{
  // Creating constants
  const int ArSize = 20;
  char name[ArSize];

  char dessert[ArSize];

  // Displaying
  std::cout << "Enter your name: ";
  std::cin.getline(name, ArSize);         // reads through the newline

  // Displaying
  std::cout << "Enter your favourite dessert: ";
  std::cin.getline(dessert, ArSize);

  // Displaying
  std::cout << "I have some delicious " << dessert;
  std::cout << " for you, " << name << ".\n";

  // Closing the program
  return 0;
}
