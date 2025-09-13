#include <iostream>
#include <string>

// Including a header file for getting access to the MAX and MIN
// Values for each data types in C++
#include <climits>

// Running the main function
int main()
{
  // Getting the maximum value for the following data types.
  /*
  * 1). Integer
  * 2). Short
  * 3). Long
  * 4). Long Long
  */
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  // sizeof operator yields size of type or of variable
  std::cout << "int is " << sizeof (n_int) << "bytes." << std::endl;
  std::cout << "short is " << sizeof (n_short) << " bytes." << std::endl;
  std::cout << "long is " << sizeof (n_long) << " bytes." << std::endl;
  std::cout << "long long is " << sizeof n_llong << " bytes." << std::endl;
  std::cout << std::endl;

  // Getting the maximum values for the data types
  std::cout << "Maximum Values" << std::endl;
  std::cout << "int: " << n_int << std::endl;
  std::cout << "short: " << n_short << std::endl;

  std::cout << "long: " << n_long << std::endl;
  std::cout << "long long:  " << n_llong << std::endl;

  std::cout << ""; 


  // Closing the function
  return 0;
}
