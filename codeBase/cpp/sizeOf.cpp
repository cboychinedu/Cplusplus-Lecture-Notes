// including the header files 
#include <iostream> 

int main(void) {
    double gpa = 2.5; 

    std::cout << sizeof(gpa) << std::endl; 

    // 
    std::string students[] = { "spongebob", "partick", "squidward", "kevlin", "Sarah", "mosh"};
    
    // Getting the number of elements in the array 
    int elementNumbers = sizeof(students) / sizeof(std::string); 

    // 
    for (int i = 0; i < elementNumbers; i++ ) {
        std::cout << students[i] << std::endl; 

    }

    // closing up 
    return 0; 

}