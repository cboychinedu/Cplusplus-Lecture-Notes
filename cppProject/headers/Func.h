// Including the header files
#include <iostream>
#include <string>

// Creating a struct class for each registered users
struct user_information {
  std::string FIRST_NAME;
  std::string LAST_NAME;
  std::string SEX;
  std::string AGE;
  std::string EMAIL;
  std::string LOCATION;
  std::string PHONE_NUMBER;
};

// Creating a struct object to hold a particular user information.
user_information first_user, second_user, third_user;

// Taking the first user_information
void extract_first_user_information()
{
  // Taking the first user FIRST_NAME
  std::cout << "First User:  \n";
  std::cout << "What is your First Name: ";
  getline(std::cin, first_user.FIRST_NAME);

  // Taking the first user LAST_NAME
  std::cout << "What is your Last Name: ";
  getline(std::cin, first_user.LAST_NAME);

  // Taking the first user SEX value
  std::cout << "What is your sex: ";
  getline(std::cin, first_user.SEX);

  // Taking the first user AGE value
  std::cout << "What is your age: ";
  getline(std::cin, first_user.AGE);

  // Taking in the first user EMAIL value
  std::cout << "What is your email: ";
  getline(std::cin, first_user.EMAIL);

  // Taking in the first user location value
  std::cout << "What is your location: ";
  getline(std::cin, first_user.LOCATION);

  // Taking in the first user phone number
  std::cout << "What is your phone number: ";
  getline(std::cin, first_user.PHONE_NUMBER);
}

// Taking the second user information
void extract_second_user_information()
{
  // Taking the second user's information
  // By starting of with taking the first name
  std::cout << "Second User:  \n";
  std::cout << "Type in your First Name: ";
  getline(std::cin, second_user.FIRST_NAME);

  // Taking the second user last name
  std::cout << "What is your Last Name: ";
  getline(std::cin, second_user.LAST_NAME);

  // Taking the second user SEX value
  std::cout << "What is your sex: ";
  getline(std::cin, second_user.SEX);

  // Taking the second user AGE value
  std::cout << "What is your age: ";
  getline(std::cin, second_user.AGE);

  // Taking the second user EMAIL value
  std::cout << "What is your email: ";
  getline(std::cin, second_user.EMAIL);

  // Taking the second user location value
  std::cout << "What is your location: ";
  getline(std::cin, second_user.LOCATION);

  // Taking the second user phone number
  std::cout << "What is your phone number: ";
  getline(std::cin, second_user.PHONE_NUMBER);
}

// Creating a function for displaying all the information about the
// The fist user
void display_user(std::string user)
{
  // Displaying all the information for the selected user
  if (user == "first")
  {
    // Execute this block of code for the first user
    std::cout << "You selected the first user. \n";
    std::cout << "First Name: "      << first_user.FIRST_NAME    << "\n"
              << "Last Name: "       << first_user.LAST_NAME     << "\n"
              << "Sex: "             << first_user.SEX           << "\n"
              << "Age: "             << first_user.AGE           << "\n"
              << "Email: "           << first_user.EMAIL         << "\n"
              << "Location: "        << first_user.LOCATION      << "\n"
              << "Phone Number: "    << first_user.PHONE_NUMBER  << "\n";
  }

  // Else if block to execute if the the selected user is second.
  else if (user == "second")
  {
    // Execute this block of code for the second user
    std::cout << "You selected the second user. \n";
    std::cout << "First Name: "      << second_user.FIRST_NAME    << "\n"
              << "Last Name: "       << second_user.LAST_NAME     << "\n"
              << "Sex: "             << second_user.SEX           << "\n"
              << "Age: "             << second_user.AGE           << "\n"
              << "Email: "           << second_user.EMAIL         << "\n"
              << "Location: "        << second_user.LOCATION      << "\n"
              << "Phone Number: "    << second_user.PHONE_NUMBER  << "\n";
  }

}
