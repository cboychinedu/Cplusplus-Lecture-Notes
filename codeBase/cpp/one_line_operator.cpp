// Including the header files
#include <iostream>
#include <string>

// Creating a universal constant variable
const double kpr = 0.123E-10;

// Creating the first function called cal_one
double cal_one(double value)
{
    // Creating variables to hold the result for the calculation
    double result = 0.98e-4 * value;

    // Returning the calculated result
    return result;

}

// Creating the second function called cal_two of return type double
double cal_two(double value)
{
    // Creating a variable to hold the result for the calculation
    double result = 1.098 * value;

    // Returning the calculated result
    return result;

}

// Running the main function
int main()
{
    // Creating two variable of data type double to hold different volumes
    double vol1 = 0.876;
    double vol2 = 12.098e-2;

    // Calling in both function for the calculation
    double final_result = vol1 > vol2? cal_two(kpr) : cal_one(kpr);

    // Displaying the results
    std::cout << "The value for the final result is: " << final_result << std::endl;

    // Closing the program
    return 0;
}
