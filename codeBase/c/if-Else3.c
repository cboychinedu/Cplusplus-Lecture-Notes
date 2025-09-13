// Including the header files 
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 

// Running the main function 
int main(void) {
    // Declaring some variables 
    int a, b, c, max; 

    // Taking in user input 
    printf("Enter 3 numbers: "); 
    scanf("%d %d %d", &a, &b, &c);  
    // Setting the if block for a 
    if (a > b && a > c) {
        // Setting max to hold the value for a 
        max = a; 
    } 
    // Else if block 1 for b 
    else if (b > c && b > a) {
        // Setting the maximum value to hold the value for b 
        max = b; 

    }
    // Else if block 2 for c 
    else if (c > b && c > a) {
        // Setting the maximum value to hold the value for c 
        max = c; 
    }
    // Displaying the maximum value 
    printf("The maximum value is: %d \n", max); 
    // Closing up 
    return 0; 
}