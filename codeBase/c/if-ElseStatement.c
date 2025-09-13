// Including the header files 
#include <stdlib.h> 
#include <stdio.h> 

/* 
* If / else statement 
* 
*/ 

int main(void) {
    // Creating variables 
    int a, b, max; 

    // 
    printf("Enter first number: "); 
    // Taking in the first input from the user   
    scanf("%d", &a); 
    // Taking in the second input from the user  
    printf("Enter second number: "); 
    scanf("%d", &b); 

    // Creating the if block 
    if (a > b) {
        // Setting max to hold the values for a 
        max = a; 
    }
    // Else block 
    else 
    {   
        // Setting max to hold the values for b 
        max = b; 
    }

    // Displaying the maximum value 
    printf("Maximum is %d\n", max); 

    // Closing up 
    return 0; 

}