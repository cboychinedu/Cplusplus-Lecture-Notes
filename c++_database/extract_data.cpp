/* Extracting the data from sqlite3 database
*/

// Including the header files
#include <iostream>
#include <sqlite3.h>

// Using the standard namespace libary
using namespace std;

// Running the main function
int main()
{
  // Creating a pointer variable called "DB"
  sqlite3* DB;

  // Creating the sql query for extracting the data
  std::string sql = " ";

  /* ***/

  // Creating a variable to hold the error message
  char *messageERR;

  // Creating an integer to hold the exit code
  int exit = 0;

  // Opening the database
  exit = sqlite3_open("example.db", &DB);

  // Getting the returned exit code after code execution
  const int DATA = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageERR);

  // Closing the program
  return 0;
}
