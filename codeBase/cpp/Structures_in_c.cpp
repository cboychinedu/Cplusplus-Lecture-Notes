// including the header files
#include <iostream>
#include <string>

// External declaration of a struct type
struct customers
{
    // Creating the values each individual customers should have
    std::string full_name;      // Customer Full name
    int age;                    // Customer Age
    std::string address;        // Customer Address
    std::string phone_number;   // Customer Phone number
    std::string items_purchased;  // Items purchased by the customer.

};

// Creating a UNION
union One4All
{
  // Creating data inside the union object type
  /* Note, only one value can be used at a time */
  int int_value;
  long long_value;
  double double_value;

};

// Runing the main function
int main()
{
  // Creating a string variable to hold the answered question
  std::string answer;

  // Creating an object from the created UNION data type
  One4All numValues;

  numValues.int_value = 64;
  std::cout << "The Union value is: " << numValues.int_value << "\n";

  // Creating a struct object from the declared struct data type above
  customers first_customer = {
    "Mbonu Chinedum",
    25,
    "NO 54, Airport Road Giwamu Warri Delta State.",
    "+234706877312",
    "5 oranges, 2 apples"};

  // Second customer
  customers second_customer = {
    "Alan Smith",
    35,
    "16th Avenue Street, CA, USA.",
    "+133-0098-2134",
    "16 pieces of flakes, 24 canned food."
  };

  // Third customer
  customers third_customer = {
    "Sarah Winthread",
    19,
    "35th UK temp-rouge street UK.",
    "+211-09887-12234",
    "Assult weapons, 60 ammunitions"
  };

  // Working on the struct data for each customers
  std::cout << "Which customer data do you wnat to see (first, second/third): ";
  std::cin >> answer;

  // Displaying the result
  std::cout << "Your input was: " << answer << std::endl;

  // making if/else block statements
  if (answer == "first")
  {
    // Execute this block of statement below if the condition above is true.
    std::cout << "Welcome, you selected the first customer" << std::endl;

    // Displaying all the information about the first customer
    std::cout << "The first customer full name is: " << first_customer.full_name << std::endl;
    std::cout << "The first customer age is: " << first_customer.age << std::endl;
    std::cout << "The first customer home address is: " << first_customer.address << std::endl;
    std::cout << "The first customer phone number is: " << first_customer.phone_number << std::endl;
    std::cout << "The first customer goods bought is: " << first_customer.items_purchased << std::endl;

  }

  // Else if block statement if the if statement was not executed
  else if (answer == "second")
  {
    // Execute this block of statement below if the condition above is true.
    std::cout << "Welcome, you have selected the second customer" << std::endl;

    // Displaying all the information about the second customer
    std::cout << "The second customer full name is: " << second_customer.full_name << std::endl;
    std::cout << "The second customer age is: " << second_customer.age << std::endl;
    std::cout << "The second customer home address is: " << second_customer.address << std::endl;
    std::cout << "The second customer phone address is: " << second_customer.phone_number << std::endl;
    std::cout << "The second customer goods bought is: " << second_customer.items_purchased << std::endl;

  }

  // Creating another else/if block
  else if (answer == "third")
  {
    // Execute this block of statement below if the condition above is true.
    std::cout << "Welcome, you have selected the third customer :)" << std::endl;

    // Displaying all the information about the third customer
    std::cout << "The third customer full name is: " << third_customer.full_name << std::endl;
    std::cout << "The third customer age is: " << third_customer.age << std::endl;
    std::cout << "The third customer home address is: " << third_customer.address << std::endl;
    std::cout << "The third customer phone address is: " << third_customer.phone_number << std::endl;
    std::cout << "The third customer goods bought is: " << third_customer.items_purchased << std::endl;

  }


  // Closing the program
  return 0;
}
