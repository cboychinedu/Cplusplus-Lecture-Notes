#include <iostream>
#include <string>

// Using some necessary functions
using std::cout;

// Creating a function for calculations
void sum_numbers(int num1, int num2)
{
  // Creating a variable to hold the result
  int result;

  // summing up the numbers
  result = num1 + num2;

  // Displaying the results of the summed numbers
  std::cout << result << std::endl;
}

// Creating a function for diving numbers
void divide_numbers(double num1, double num2)
{
  // Creating a variable to hold the result
  double result;

  // Diving the numbers
  result = num1 / num2;

  // Displaying the results for the divided numbers
  std::cout << result << std::endl;
}

// Running the main function
// int main()
// {
//   // printing values to the screen
//   std::cout << "hello world \n";

//   // second printing
//   cout << "second printing \n";

//   // Executing the function above
//   sum_numbers(30, 50);

//   // Executing the division function above
//   divide_numbers(40, 20); 

//   // closing the application
//   return 0;
// }
