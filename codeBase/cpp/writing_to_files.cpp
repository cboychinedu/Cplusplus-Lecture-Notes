// Including the header files
#include <iostream>
#include <fstream>
#include <string>

// Using the standard namespace libary
using namespace std;

/* So the goal here is to write another c++ code inside another
** Another file using the fstream class. *
*/


// Running the main function
int main()
{
    // Creating the fstream read byte object
    ofstream outFile;

    // Opening the file
    outFile.open("execution.cpp");

    // Adding the source code inside the file
    outFile << "#include <iostream> " << std::endl;
    outFile << "#include <string> "   << std::endl;
    outFile << "// Running the main program "   << std::endl;
    outFile << "int main()"  << std::endl;
    outFile << "{" << std::endl;
    outFile << "    std::cout << \"Hello Chinedum\" << std::endl;  " << std::endl;
    outFile << "    // Closing the program" << std::endl;
    outFile << "    return 0;" << std::endl;
    outFile << "}" << std::endl;

    // Closing and saving the file
    outFile.close();

    // Closing the program
    return 0;
}
