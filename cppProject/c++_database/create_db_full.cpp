/* Connection to sqlite3 database
* $ g++ create_db_full.cpp -l sqlite3
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

  // Adding data-objects to the database
  std::string sql = "CREATE TABLE PERSON("
                    "ID INT PRIMARY KEY      NOT NULL,  "
                    "NAME           TEXT     NOT NULL,  "
                    "SURNAME        TEXT     NOT NULL,  "
                    "AGE            INT      NOT NULL,  "
                    "ADDRESS        CHAR(50),           "
                    "SALARY         REAL );";

  // Creating an integer to hold the exit code
  int exit = 0;

  // Opening the database
  exit = sqlite3_open("example.db", &DB);

  // Creating a variable to hold the message error
  char* messageERR;

  // Getting the exit code after executing the sql statement
  exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageERR);

  // if-statement
  if ( exit != SQLITE_OK )
  {
    // Execute this block of code if the condition was met/(if the table was not crated)
    std::cerr << "Error Create Table" << std::endl;
    sqlite3_free(messageERR);

  }

  // executing the else block
  else
  {
    // executing this block of code if the condition was met
    std::cout << "Table was created sucessfully" << std::endl;

  }

  // Closing the connection to the database
  sqlite3_close(DB);

  // Closing the program
  return 0;
}
