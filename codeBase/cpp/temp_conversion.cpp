// Including the header files
#include <iostream>
#include <string>

/* Write a program that has main() call a user-defined function that takes a celsius
* temperature value as an argument and then return the equivalent Faherenheit value.
* The program should request the Celsius value as input from the user and display the result.
* As shown in the following code.
* Please enter a Celsius value: 20
* 20 degrees Celsius is 68 degrees Faherenheit.
* N/B: The formula for making the conversion:
* Faherenheit = 1.8 x degrees Celsius + 32.0
*/

double CelsiusToFahrenheit(double celsius_value)
{
  // Creating the result variable
  double result;

  // Performing the calculation
  result = 1.8 * celsius_value + 32.0;

  // Returning the result
  return result;
}

// Running the main function
int main()
{
  // Creating a variable to hold the value for celsius
  double celsius, result;

  // Taking in the user's input for celsius.
  std::cout << "Please enter a Celsius value: ";
  std::cin >> celsius;

  // Getting the conversion for celsius to fahrenheit
  result = CelsiusToFahrenheit(celsius);

  // Displaying the results
  std::cout << celsius << " degrees Celsius is " << result << " degrees Faherenheit." << std::endl;

  // Closing the program
  return 0; 
}
