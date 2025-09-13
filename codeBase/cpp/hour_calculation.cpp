// Including the header files
#include <iostream>
#include <string>

/* Write a program that asks the user to enter an hour value and a minute value. The main()
* function should then pass these two values to a type void function that displays the two
* values in the format shown in the following sample run:
* Enter the number of hours: 9
* Enter the number of minutes: 28
* Time: 9:28
*/

// Creating the main function
int main()
{

  // Creating a varible to hold some specific values
  double numberOfHours, numberOfMinutes;

  // Taking the user input for hours.
  std::cout << "Enter the number of hours: ";
  std::cin >> numberOfHours;

  // Taking the user input for minutes.
  std::cout << "Enter the number of minutes: ";
  std::cin >> numberOfMinutes;

  // Displaying the time
  std::cout << "The time is: " << numberOfHours << ":" << numberOfMinutes << std::endl; 

  // Closing the main function
  return 0;
}
