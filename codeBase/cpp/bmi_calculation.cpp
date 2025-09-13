// Including the header file
#include <iostream>
#include <cmath>
#include <string>

/* Body Mass Index
  Body Mass Index is a simple calculation using a person's height and weight.
  The formula for BMI ==> Kg/m^2  where Kg is the person's weight in kilograms, and
  m^2 is their height in metres squared.
  N/B: A BMI of 25.0 or more is overweight, while the healthy range is 18.5 to 24.9.

*/

// Running the main function for calculting the Body Mass Index.
int main()
{
  // Declaration of variables for height(meters), and mass(kilograms), and BMI.
  double body_mass_index, mass, height;

  // Taking in input from the user for the mass
  std::cout << "Enter your mass(Kg): ";
  std::cin >> mass;

  // Taking in input from the user for the height
  std::cout << "Enter your height(m): ";
  std::cin >> height;

  // Calculation for the body mass index (BMI) by squaring the height
  // Then add the whole values together into the equation.
  double height_squared = pow(height, 2);
  body_mass_index = mass / height_squared;

  // Displaying the result
  std::cout << "The body mass index is(BMI): " << body_mass_index << std::endl;
  
  // Closing the program
  return 0;
}
