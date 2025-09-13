// Including the header file
#include <iostream>
#include <fstream>
#include <string>

//
using namespace std;

// Running the main function
int main()
{
    // Creating the ifstream class
    ifstream inFile;

    // Creating an empty variable of data type string
    std::string line;

    // Setting the path to the file name
    std::string filename = "file.txt";

    // Opening the file located on the disk
    inFile.open(filename);

    // Reading from the line after line by using a while loop
    while ( inFile )
    {

        // Getting each data from each line and saving it into the
        // line variable called line.
        getline(inFile, line);

        // Displaying each saved line
        std::cout << line << std::endl;

        // Checking the boolean value for the "inFile"
        std::cout << "The bool type is: "  << bool(inFile) << std::endl;

    }

    // Closing the program
    return 0;
}
