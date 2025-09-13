// Including the header files
#include <iostream>
#include <string>

// Using the standard namespace lib
using namespace std;

// Creating the first function
int sum_arr(int arr[], int ArSize);

// Creating a constant to hold the size of the function
const int ArSize = 8;

// Running the main function
int main()
{
    // Creating an array with a size of 8
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

    // enabling the array initialization
    int sum = sum_arr(cookies, ArSize);

    // Displaying the total
    std::cout << "Total cookies eaten: " << sum << std::endl;

    // Closing the program
    return 0;
}


// Defining the function
int sum_arr(int arr[], int ArSize)
{
    // Creating an integer variable to hold a value called total
    int total = 0;

    // Creating a for-loop to calculate all the values in
    // the array
    for (int i = 0; i < ArSize; i++)
    {
        // Adding all the value in the total variable
        total = total + arr[i];
    }

    // Returning the value total
    return total;
}
