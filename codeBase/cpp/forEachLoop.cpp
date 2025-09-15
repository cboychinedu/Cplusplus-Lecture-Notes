// including the header files 
#include <iostream> 
#include <string> 

// running the main function 
int main(void) {
    // declaring a string array
    std::string students[] = { "spongebob", "patrick", "squidward", "kevlin", "Sarah", "mosh" };
    const int grades[] = { 90, 85, 78, 92, 88, 95 };

    for (int grade: grades) {
        std::cout << grade << std::endl; 
    }

    // Getting the number of elements in the array 
    int elementNumbers = sizeof(students) / sizeof(std::string); 

    // Using a for-each loop to iterate through the array
    for (std::string student : students) {
        std::cout << student << std::endl; 
    }

    // closing up 
    return 0; 
}