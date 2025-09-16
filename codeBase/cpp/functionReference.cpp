#include <iostream>

// Function that takes an int by reference and modifies it
void increment(int &value) {
    value += 1;
}

int main() {
    int number = 5;
    std::cout << "Before increment: " << number << std::endl;
    increment(number);
    std::cout << "After increment: " << number << std::endl;
    return 0;
}