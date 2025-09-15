// including the header files 
#include <iostream> 
#include <string> 

// 
int main() {
    std::string car[] = { 
        "Corvette", "Mustang", "Camry"
    }; 
    double prices[] = {5.60, 50.0, 5e-10, 15.00}; 

    // 
    std::cout << car[0] << std::endl; 
    // 
    std::cout << prices[2]; 

    // closing up 
    return 0; 

}