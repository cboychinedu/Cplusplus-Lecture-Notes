// Including the header files
#include <iostream>
#include <string>
#include <vector>

// Including a sub-function header file
#include "Func.h"


// Running the main function
int main()
{

  // Creating a for loop to get the information for the (first_user)
  for (int i = 4; i > 1; i--)
  {

    // Checking for the first value for i == 4
    if ( i == 4)
    {
      // Taking the first user information
      extract_first_user_information();
    }

    else if ( i == 3 )
    {
      // Taking the second_user information
      extract_second_user_information();
    }

  };

  // Displaying the users FIRST_NAME for first and second created
  // Struct object
  std::string OPTION;
  std::cout << "What information do you want to see (first-user)/(second-user) ? \n";
  std::cout << "First-user type f / Second-user, type s: ";
  std::cin >> OPTION;

  // Execute this block of code if the option selected is "f"
  if ( OPTION == "f")
  {
    // Calling the display user and parsing the "first" string into the function
    // To display all the information about the first user
    display_user("first");
  }

  // Execute this block of code if the option selected is "s"
  else if ( OPTION == "s")
  {
    // Calling the display user and parsing the "second" string into the function
    // To display all the information about the second user
    display_user("second");
  }


  // Closing the program
  return 0;
}
