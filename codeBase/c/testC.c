// Including the header files  
#include <stdlib.h> 
#include <stdio.h> 

// Running the main function 
int main(void) {
    // Creating a variable to hold integers 
    int answer, year; 

    // Taking in the user input 
    printf("Type your year here: "); 
    scanf("%d", &year); 

    // Performing some mathematical operations 
    if (year % 4 == 0) 
        {
            // Nested if statement 
            if (year % 100 == 0) 
                {
                    // Another nested if statement 
                    if (year % 400 == 0) 
                        {
                            // Displaying the value 
                            printf("It is a leap year \n"); 
                        }
                    // Nested else staement 
                    else 
                        {
                            // Displaying the value 
                            printf("Not a leap year \n"); 
                        }
                }
            // Nested else statement 
            else 
                {  
                    // Displaying the value 
                    printf("It is a leap year \n");
                }  
        }
    // Another nested else statement 
    else 
        {
            // Displaying the value 
            printf("Not a leap year \n"); 
        }

    // Closing up 
    return 0; 
}