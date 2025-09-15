// including the header files
#include <iostream>
#include <string>
#include <vector>

// Creating a function for adding the numbers
double addNumbers(const std::vector<double> &numbers) {
    // Getting the result
    double sum = 0.0;

    // Loop through the vector and add each number to the sum.
    for (double num: numbers) {
        sum += num;

    }

    // return the value
    return sum;
}


// running the main script
int main(int args, char** argv) {
    // Creating a vector of numbers
    std::vector <double> randomNumbers = {20.0, 30.45, 50.98, 4.56, 4.5f};

    // Looping through the vectors
    double totalSum = addNumbers(randomNumbers);

    // Displaying the result
    std::cout << "The total sum is: " << totalSum << std::endl;

    // closing up
    return 0;
}
