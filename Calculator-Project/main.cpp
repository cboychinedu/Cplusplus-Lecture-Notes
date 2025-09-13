// Including the header files
#include <iostream>
#include <string>

// Including the header files for the operation
#include "operations.h"

// Using the standard namespace libary
using namespace std;

// Running the main function
int main()
{
  // Creating an array to hold an int data type
  double result;

  // Creating variables to hold the two values
  double num1, num2;

  // Setting the condition to true.
  bool COND = true;
  bool first_step = false;

  // Creating a string to hold the user input
  string user_input;

  // Asking the user for the specific calculation
  std::cout << "Type D(Division): A(Addition): S(Substraction): M(Multiplication): E(Exit): ";
  getline(std::cin, user_input);

  do {

    // if the first step is true, execute the block of code below.
    if ( first_step == true )
    {
      // Asking the user for the specific calculation
      std::cout << "Type D(Division): A(Addition): S(Substraction): M(Multiplication): E(Exit): ";
      getline(std::cin, user_input);

    }

    // Performing the calculation for multiplication
    if ( user_input == "M" || user_input == "m")
    {
      // Executing the multiplication function but firstly asking the user for the
      // numbers to be multiplied.
      cout << "You typed m for multiplication." << std::endl;
      cout << "First number: ";
      cin >> num1;

      // Clearing the buffer
      cin.clear();

      // Getting the second number
      cout << "The second number: ";
      cin >> num2;

      // Performing the calculation (Multiplication)
      result = multiplication(num1, num2);

    }

    // Performing the calculation for division
    else if ( user_input == "D" || user_input == "d" )
    {
      // Executing the division function but firstly asking the user for the
      // numbers to be divided.
      cout << "You typed d for division." << std::endl;
      cout << "First number: ";
      cin >> num1;

      // Clearing the buffer
      cin.clear();

      // Getting the second number
      cout << "The second number: ";
      cin >> num2;

      // Performing the calculation (Division)
      result = division(num1, num2);

    }

    // Performing the calculation for addition
    else if ( user_input == "A" || user_input == "a" )
    {
      // Executing the addition function but firstly asking the user for the
      // numbers to be divided.
      cout << "You typed a for addition." << std::endl;
      cout << "First number: ";
      cin >> num1;

      // Clearing the buffer
      cin.clear();

      // Getting the second number
      cout << "The second number: ";
      cin >> num2;

      // Perfoming the calculation (Addition)
      result = addition(num1, num2);

    }

    // Performing the calculation for substraction
    else if ( user_input == "S" || user_input == "s" )
    {
      // Executing the substraction function but firstly asking the user for the
      // numbers to be substracted.
      cout << "You typed s for substraction." << std::endl;
      cout << "First number: ";
      cin >> num1;

      // Clearing the buffer
      cin.clear();

      // Getting the second number
      cout << "The second number: ";
      cin >> num2;

      // Performing the calculation (Substraction)
      result = subtraction(num1, num2);

    }

    // Exiting out of the program.
    else if ( user_input == "E" || user_input == "e" )
    {
      // Exiting the program by making the condition false.
      break;

    }

    // Displaying the result
    cout << "The result is: " << result << std::endl;

    // Clearing the buffer.
    cin.ignore();

    // Continue the while loop
    first_step = true;
    continue;

  } while ( COND );

  // Closing the program
  return 0;
}
