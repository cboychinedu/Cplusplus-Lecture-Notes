#include <iostream>
#include <string>

// Running the main function
int main()
{
  // creating the first array
  int digitsArray[] = {10, 20, 100, 30, 40, 50};

  // Creating some basic constants
  int numValue;

  // Finding the size of the array
  int size = sizeof(digitsArray) / sizeof(digitsArray[0]);

  // Creating a for-loop to extract all the numbers from the specified array
  for (int i = 0; i < size; i++)
  {
    // Displaying each values inside the array
    std::cout << "The first value in the array is: " << digitsArray[i] << std::endl;

    // Checking for a specific number
    if (digitsArray[i] == 30)
    {
      std::cout << "We have reached the index of: " << i << std::endl;
      numValue = i;
    }

  }

  // Stating the index value for 30
  std::cout << "The index for 30 is: qqqqqqqqwwweeerrrrrrrrrrrr " << numValue << std::endl;

  // Closing the program
  return 0;
}
