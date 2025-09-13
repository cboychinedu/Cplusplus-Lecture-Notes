#include <iostream>
#include <string>

// Creating a function that converts distance in furlongs to yards
double distToYards(double distance)
{
  // Creating a variable to hold the result as a double datatype
  double result;

  /* Recall that: One furlong ===> 220 yards.
  * Therefore Xyards ===> Valuefordistance(furlong) * 220yards.
  */
  result = distance * 220;

  // Returning the result
  return result;

}

// Creating a function that converts the user's age into months
double ageToMonths(double age)
{
  /* Recall that: 1year ==> 12month.
  * Therefore Xmonth ===> ValuegiveninYear * 12months.
  */
  // Creating a variable to hold the result for the calculated Xmonth
  double CalcMonth;

  // Getting the value for the age in months by multiplying the given age by 12
  CalcMonth = 12 * age;

  // Returning the calculated month
  return CalcMonth;
}

// Running the main function
int main()
{
  // Displaying the name and address of "Alan Smith"
  /* First Exercise */
  std::cout << "Name: Alan Smith" << std::endl;
  std::cout << "Address: Banana Island Lagos Nigeria." << std::endl;


  /* Second Exercise */
  // Creating a variable to hold the values for distance in (furlongs)
  double distanceF, yards;

  // Asking for the user's input for distance in furlongs
  std::cout << "Type your distance in 'furlongs': ";
  std::cin >> distanceF;

  // Getting the value in yards
  yards = distToYards(distanceF);

  // Performing the calculation
  std::cout << "The value in yards is: " << yards << std::endl;


  /* Third Exercise */
  // Creating a variable to hold the user's age
  double age;

  // Creating a variable to hold the values for the user's age
  std::cout << "Type in your age: ";
  std::cin >> age;

  // Perfoming the calculation and getting the age in months
  double AgeInMonths = ageToMonths(age);

  // Displaying the results for the converted age in months
  std::cout << age << "years in months is " << AgeInMonths << std::endl;

  // Closing the function
  return 0;
}
