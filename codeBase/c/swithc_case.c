// Including the header files 
#include <stdio.h> 
#include <stdlib.h> 

// Running the main function 
int main(void) {
    // Declaring an integer variable 
    int number; 

    // Taking in inputs from the user 
    printf("Enter a number: "); 
    scanf("%d", &number); 

    // Setting the switch case senario 
    switch (number) {
        // Case one 
        case 1: printf("The number is one. \n"); 
                break; 

        // Case Two 
        case 2: printf("The number is two. \n"); 
                break;  

        // Case Three 
        case 3: printf("The number is three. \n"); 
                break;  

        // Setting the default 
        default: printf("Invalid Number \n");      

    }
    // Closing the program 
    return 0; 
    
}