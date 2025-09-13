// Including the header files
#include <iostream>
#include <string>
#include <vector>

// Running the main function
int main()
{
    // Creating an array to hold values of double type
    double prices[5] = {4.99, 0.87E-4, 6.87, 7.998, 8.49};

    // Getting the size of the array
    const int SIZE = sizeof(prices) / sizeof(prices[0]);

    // Creating an array type of float
    float volArray[SIZE];

    // Creatng the floating point variable to hold the result from
    // the calculation
    float volBar;

    /* Creating a for-loop to loop through the array and perform some
        calculation on the individual elements, before saving the values
        into a new array of type cast "float"
        */

    // Setting the value for count as zero
    int count = 0;

    // Creating the range-based for-loop
    for ( double x : prices )
    {
        // performing the calculation
        volBar = float(x) * 0.0456e-4;

        // Saving the value for the volBar into the volArray
        volArray[count] = volBar;

        // Incrementing the value for count by one
        count ++;
    }

    // Displaying all the new elements inside the volArray
    std::cout << volArray[0] << "\n"
              << volArray[1] << "\n"
              << volArray[2] << "\n"
              << volArray[3] << "\n"
              << volArray[4] << "\n";

    // Working with vectors
    std::vector <std::string> NAMES = {"Joshua", "Mike", "Steph"};

    // Getting the size of the array
    // const int VECTOR_ARRAY = NAMES.size();
    // Setting the count
    count = 0;

    // Using the range base value to extract the information from the string array.
    for ( std::string names : NAMES )
    {
        // Displaying the names
        std::cout << "The " << count + 1 << " Element in the array is: " << names << std::endl;

        // Incrementing count by one
        count ++;

    }

    // Closing the program
    return 0;
}
