// Including the header files 
#include <stdio.h> 
#include <stdlib.h> 

// Running the main function 
int main() {
    // Creating a variable to hold two values 
    double income, tax; 
    // Taking in the user input 
    printf("Enter your income: "); 
    scanf("%lf", &income); 
    
    // Writing an if/else block statement 
    // If block 
    if (income < 10000) {
        tax = 0.0; 
    }
    // Else block 
    else if (income >= 10000 && income < 20000) {
        tax = income * 0.1; 
    }
    // 
    else if (income >= 20000 && income < 50000) {
        tax = income * 0.2; 
    }
    // 
    else {
        tax = income * 0.25; 
        tax = tax + (tax * 0.1); 
    }
    // Displaying the tax 
    printf("The payable tax is $%.2lf \n", tax); 
    // Closing up 
    return 0; 
}