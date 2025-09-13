// Including the header files
#include <iostream>
#include <string>

// Creating a const variable
const int ArSize = 8;

// Declaration of the variable
int sum_arr(int arr[], int n);

// Using the standard namespace
using namespace std;

// Running the main function
int main()
{
    // Creating an array with the const variable size
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

    // Creating structures
    struct NewStruct {
        char Name[20];
        string StringName;
        double volume;
    };

    //
    NewStruct new_struct1;
    new_struct1.StringName = "Mbonu Chinedum";
    new_struct1.volume = .098E-3;

    // Displaying the 4th value in the array
    sum_arr(cookies, ArSize);

    //
    cout << new_struct1.StringName << std::endl;
    cout << new_struct1.volume << std::endl;

    // Closing the program
    return 0;
}

// Creating the function
int sum_arr(int * arr, int n)
{
    // Creating an integer variable called total
    int total = 0;

    // making some displays
    std::cout << arr[3] << std::endl;
}
