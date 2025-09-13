#include <iostream>
#include <string>
#include <cmath>

// Using name spaces
// using namespace std;

// Running the main function
int main()
{
  // Creating a constant for calcuation of force
  const double g = 9.81;

  // Checking the name space to see if its working
  // std::cout << "Testing to see if just only cout would output this string of text " << std::endl;

  /*
  Using the equation F = mg where by g is a constant ==> 9.81m/s^2
  Then we look for the mass(M) and the Force(F)

  */

  // Creating variables for the Force, and Mass
  double F, M;

  // Making the calculations
  M = 10.23;

  // Finding the force
  F = g * M;

  // Displaying the result of the calculated force
  std::cout << F << " Newton" << std::endl;

  // Closing the program
  return 0;
}
